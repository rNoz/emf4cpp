
#
# enduserlicense.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#


set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O3 -funroll-loops")

set(enduserlicense_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicensePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicenseFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicensePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicenseFactoryImpl.cpp
   )
   
set(enduserlicense_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicensePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicenseFactory.hpp
   )

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicenseFactory.hpp DESTINATION include/emf4cpp/enduserlicense)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/enduserlicense/EnduserlicensePackage.hpp DESTINATION include/emf4cpp/enduserlicense)   
   
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../../emf4cpp ../../emf4cpp)

add_library(emf4cpp-enduserlicense SHARED ${enduserlicense_HEADERS} ${enduserlicense_SOURCES})
set_target_properties(emf4cpp-enduserlicense PROPERTIES VERSION 0.0.1 SOVERSION 1)

install(TARGETS emf4cpp-enduserlicense DESTINATION lib)

