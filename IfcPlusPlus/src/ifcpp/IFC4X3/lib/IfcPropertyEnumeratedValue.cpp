/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcComplexProperty.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4X3/include/IfcPropertyEnumeratedValue.h"
#include "ifcpp/IFC4X3/include/IfcPropertyEnumeration.h"
#include "ifcpp/IFC4X3/include/IfcPropertySet.h"
#include "ifcpp/IFC4X3/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4X3/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcValue.h"

// ENTITY IfcPropertyEnumeratedValue 
IFC4X3::IfcPropertyEnumeratedValue::IfcPropertyEnumeratedValue( int tag ) { m_tag = tag; }
void IFC4X3::IfcPropertyEnumeratedValue::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCPROPERTYENUMERATEDVALUE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Specification ) { m_Specification->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_EnumerationValues.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_EnumerationValues.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcValue>& type_object = m_EnumerationValues[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, true, precision );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ",";
	if( m_EnumerationReference ) { stream << "#" << m_EnumerationReference->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPropertyEnumeratedValue::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPropertyEnumeratedValue::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Specification = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readSelectList( args[2], m_EnumerationValues, "IFCVALUE", map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){readEntityReference( args[3], m_EnumerationReference, map, errorStream, entityIdNotFound );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcPropertyEnumeratedValue, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPropertyEnumeratedValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSimpleProperty::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> EnumerationValues_vec_object( new AttributeObjectVector() );
	std::copy( m_EnumerationValues.begin(), m_EnumerationValues.end(), std::back_inserter( EnumerationValues_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "EnumerationValues", EnumerationValues_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "EnumerationReference", m_EnumerationReference ) );
}
void IFC4X3::IfcPropertyEnumeratedValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSimpleProperty::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPropertyEnumeratedValue::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSimpleProperty::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPropertyEnumeratedValue::unlinkFromInverseCounterparts()
{
	IfcSimpleProperty::unlinkFromInverseCounterparts();
}
