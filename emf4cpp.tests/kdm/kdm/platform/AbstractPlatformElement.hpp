// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/AbstractPlatformElement.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KDM_PLATFORM_ABSTRACTPLATFORMELEMENT_HPP
#define KDM_PLATFORM_ABSTRACTPLATFORMELEMENT_HPP

#include <kdm/platform_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/action_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/core/KDMEntity.hpp>

/*PROTECTED REGION ID(AbstractPlatformElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace platform
    {

        class AbstractPlatformElement: public virtual ::kdm::core::KDMEntity
        {
        public:
            AbstractPlatformElement();

            virtual ~AbstractPlatformElement();

            virtual void _initialize();

            // Operations

            // Attributes

            // References
            ::ecorecpp::mapping::EList< ::kdm::source::SourceRef >& getSource();

            ::ecorecpp::mapping::EList<
                    ::kdm::platform::AbstractPlatformRelationship >& getRelation();

            ::ecorecpp::mapping::EList< ::kdm::action::ActionElement >& getAbstraction();

            ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement >& getImplementation();

            /*PROTECTED REGION ID(AbstractPlatformElement) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

            // EObjectImpl
            virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                    ::ecore::EBoolean _resolve);
            virtual void eSet(::ecore::EInt _featureID,
                    ::ecore::EJavaObject const& _newValue);
            virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
            virtual void eUnset(::ecore::EInt _featureID);
            virtual ::ecore::EClass_ptr _eClass();

            /*PROTECTED REGION ID(AbstractPlatformElementImpl) START*/
            // Please, enable the protected region if you add manually written code.
            // To do this, add the keyword ENABLED before START.
            /*PROTECTED REGION END*/

        protected:
            // Attributes

            // References

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::source::SourceRef > > m_source;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList<
                            ::kdm::platform::AbstractPlatformRelationship > > m_relation;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::action::ActionElement > > m_abstraction;

            ::ecorecpp::mapping::out_ptr<
                    ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement > > m_implementation;

        };

    } // platform
} // kdm

#endif // KDM_PLATFORM_ABSTRACTPLATFORMELEMENT_HPP

