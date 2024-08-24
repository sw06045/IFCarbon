/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <cmath>
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcCartesianPoint 
IFC4X3::IfcCartesianPoint::IfcCartesianPoint( int tag )
{
	m_tag = tag;
	m_Coordinates[0] = std::numeric_limits<double>::quiet_NaN();
	m_Coordinates[1] = std::numeric_limits<double>::quiet_NaN();
	m_Coordinates[2] = std::numeric_limits<double>::quiet_NaN();
}
void IFC4X3::IfcCartesianPoint::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCCARTESIANPOINT" << "(";
	writeRealArray3( stream, m_Coordinates, false, precision );
	stream << ");";
}
void IFC4X3::IfcCartesianPoint::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCartesianPoint::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readRealArray( args[0], m_Coordinates );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcCartesianPoint, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcCartesianPoint::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPoint::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Coordinates_vec_obj( new AttributeObjectVector() );
	Coordinates_vec_obj->m_vec.emplace_back( shared_ptr<RealAttribute>( new RealAttribute(m_Coordinates[0] ) ) );
	Coordinates_vec_obj->m_vec.emplace_back( shared_ptr<RealAttribute>( new RealAttribute(m_Coordinates[1] ) ) );
	if( !std::isnan(m_Coordinates[2]) )
	{
		Coordinates_vec_obj->m_vec.emplace_back( shared_ptr<RealAttribute>( new RealAttribute(m_Coordinates[2] ) ) );
	}
	vec_attributes.emplace_back( std::make_pair( "Coordinates", Coordinates_vec_obj ) );
}
void IFC4X3::IfcCartesianPoint::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPoint::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCartesianPoint::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPoint::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCartesianPoint::unlinkFromInverseCounterparts()
{
	IfcPoint::unlinkFromInverseCounterparts();
}
