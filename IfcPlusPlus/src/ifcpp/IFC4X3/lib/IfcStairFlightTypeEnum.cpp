/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcStairFlightTypeEnum.h"

// TYPE IfcStairFlightTypeEnum = ENUMERATION OF	(CURVED	,FREEFORM	,SPIRAL	,STRAIGHT	,WINDER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcStairFlightTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSTAIRFLIGHTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CURVED:	stream << ".CURVED."; break;
		case ENUM_FREEFORM:	stream << ".FREEFORM."; break;
		case ENUM_SPIRAL:	stream << ".SPIRAL."; break;
		case ENUM_STRAIGHT:	stream << ".STRAIGHT."; break;
		case ENUM_WINDER:	stream << ".WINDER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcStairFlightTypeEnum> IFC4X3::IfcStairFlightTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcStairFlightTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStairFlightTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcStairFlightTypeEnum>(); }
	shared_ptr<IfcStairFlightTypeEnum> type_object( new IfcStairFlightTypeEnum() );
	if( std_iequal( arg, ".CURVED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_CURVED;
	}
	else if( std_iequal( arg, ".FREEFORM." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_FREEFORM;
	}
	else if( std_iequal( arg, ".SPIRAL." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_SPIRAL;
	}
	else if( std_iequal( arg, ".STRAIGHT." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_STRAIGHT;
	}
	else if( std_iequal( arg, ".WINDER." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_WINDER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
