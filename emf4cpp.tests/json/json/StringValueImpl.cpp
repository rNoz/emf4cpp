// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * json/StringValueImpl.cpp
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

#include "StringValue.hpp"
#include <json/JsonPackage.hpp>
#include <json/Value.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::json;

/*PROTECTED REGION ID(StringValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void StringValue::_initialize()
{
    // Supertypes
    ::json::Value::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(StringValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StringValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::json::JsonPackage::STRINGVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_value);
    }
        return _any;

    }
    throw "Error";
}

void StringValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::STRINGVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_value);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean StringValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::json::JsonPackage::STRINGVALUE__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_value);

    }
    throw "Error";
}

void StringValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr StringValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::json::JsonPackage_ptr >(::json::JsonPackage::_instance())->getStringValue();
    return _eclass;
}

