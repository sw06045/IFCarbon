/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcIShapeProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcProfileProperties.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// ENTITY IfcIShapeProfileDef 
IFC4X3::IfcIShapeProfileDef::IfcIShapeProfileDef( int tag ) { m_tag = tag; }
void IFC4X3::IfcIShapeProfileDef::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCISHAPEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_OverallWidth ) { m_OverallWidth->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OverallDepth ) { m_OverallDepth->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_WebThickness ) { m_WebThickness->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeThickness ) { m_FlangeThickness->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_FilletRadius ) { m_FilletRadius->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeEdgeRadius ) { m_FlangeEdgeRadius->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeSlope ) { m_FlangeSlope->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcIShapeProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcIShapeProfileDef::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_Position, map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_OverallWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_OverallDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_WebThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_FlangeThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_FilletRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_FlangeEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){m_FlangeSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[9], map, errorStream, entityIdNotFound );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcIShapeProfileDef, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcIShapeProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "OverallWidth", m_OverallWidth ) );
	vec_attributes.emplace_back( std::make_pair( "OverallDepth", m_OverallDepth ) );
	vec_attributes.emplace_back( std::make_pair( "WebThickness", m_WebThickness ) );
	vec_attributes.emplace_back( std::make_pair( "FlangeThickness", m_FlangeThickness ) );
	vec_attributes.emplace_back( std::make_pair( "FilletRadius", m_FilletRadius ) );
	vec_attributes.emplace_back( std::make_pair( "FlangeEdgeRadius", m_FlangeEdgeRadius ) );
	vec_attributes.emplace_back( std::make_pair( "FlangeSlope", m_FlangeSlope ) );
}
void IFC4X3::IfcIShapeProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcIShapeProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcIShapeProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
