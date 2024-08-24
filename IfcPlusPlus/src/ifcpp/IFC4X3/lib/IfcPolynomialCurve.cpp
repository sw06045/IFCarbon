/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcPlacement.h"
#include "ifcpp/IFC4X3/include/IfcPolynomialCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcReal.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcPolynomialCurve 
IFC4X3::IfcPolynomialCurve::IfcPolynomialCurve( int tag ) { m_tag = tag; }
void IFC4X3::IfcPolynomialCurve::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCPOLYNOMIALCURVE" << "(";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList( stream, m_CoefficientsX, true, precision );
	stream << ",";
	writeTypeOfRealList( stream, m_CoefficientsY, true, precision );
	stream << ",";
	writeTypeOfRealList( stream, m_CoefficientsZ, true, precision );
	stream << ");";
}
void IFC4X3::IfcPolynomialCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPolynomialCurve::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Position, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readTypeOfRealList( args[1], m_CoefficientsX );}
	if( num_args > 2 ){readTypeOfRealList( args[2], m_CoefficientsY );}
	if( num_args > 3 ){readTypeOfRealList( args[3], m_CoefficientsZ );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcPolynomialCurve, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPolynomialCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Position", m_Position ) );
	shared_ptr<AttributeObjectVector> CoefficientsX_vec_object( new AttributeObjectVector() );
	std::copy( m_CoefficientsX.begin(), m_CoefficientsX.end(), std::back_inserter( CoefficientsX_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CoefficientsX", CoefficientsX_vec_object ) );
	shared_ptr<AttributeObjectVector> CoefficientsY_vec_object( new AttributeObjectVector() );
	std::copy( m_CoefficientsY.begin(), m_CoefficientsY.end(), std::back_inserter( CoefficientsY_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CoefficientsY", CoefficientsY_vec_object ) );
	shared_ptr<AttributeObjectVector> CoefficientsZ_vec_object( new AttributeObjectVector() );
	std::copy( m_CoefficientsZ.begin(), m_CoefficientsZ.end(), std::back_inserter( CoefficientsZ_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "CoefficientsZ", CoefficientsZ_vec_object ) );
}
void IFC4X3::IfcPolynomialCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPolynomialCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcPolynomialCurve::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}
