/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcBridgePartTypeEnum.h"

// TYPE IfcBridgePartTypeEnum = ENUMERATION OF	(ABUTMENT	,DECK	,DECK_SEGMENT	,FOUNDATION	,PIER	,PIER_SEGMENT	,PYLON	,SUBSTRUCTURE	,SUPERSTRUCTURE	,SURFACESTRUCTURE	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcBridgePartTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCBRIDGEPARTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ABUTMENT:	stream << ".ABUTMENT."; break;
		case ENUM_DECK:	stream << ".DECK."; break;
		case ENUM_DECK_SEGMENT:	stream << ".DECK_SEGMENT."; break;
		case ENUM_FOUNDATION:	stream << ".FOUNDATION."; break;
		case ENUM_PIER:	stream << ".PIER."; break;
		case ENUM_PIER_SEGMENT:	stream << ".PIER_SEGMENT."; break;
		case ENUM_PYLON:	stream << ".PYLON."; break;
		case ENUM_SUBSTRUCTURE:	stream << ".SUBSTRUCTURE."; break;
		case ENUM_SUPERSTRUCTURE:	stream << ".SUPERSTRUCTURE."; break;
		case ENUM_SURFACESTRUCTURE:	stream << ".SURFACESTRUCTURE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcBridgePartTypeEnum> IFC4X3::IfcBridgePartTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcBridgePartTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcBridgePartTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcBridgePartTypeEnum>(); }
	shared_ptr<IfcBridgePartTypeEnum> type_object( new IfcBridgePartTypeEnum() );
	if( std_iequal( arg, ".ABUTMENT." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_ABUTMENT;
	}
	else if( std_iequal( arg, ".DECK." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_DECK;
	}
	else if( std_iequal( arg, ".DECK_SEGMENT." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_DECK_SEGMENT;
	}
	else if( std_iequal( arg, ".FOUNDATION." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_FOUNDATION;
	}
	else if( std_iequal( arg, ".PIER." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_PIER;
	}
	else if( std_iequal( arg, ".PIER_SEGMENT." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_PIER_SEGMENT;
	}
	else if( std_iequal( arg, ".PYLON." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_PYLON;
	}
	else if( std_iequal( arg, ".SUBSTRUCTURE." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_SUBSTRUCTURE;
	}
	else if( std_iequal( arg, ".SUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_SUPERSTRUCTURE;
	}
	else if( std_iequal( arg, ".SURFACESTRUCTURE." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_SURFACESTRUCTURE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBridgePartTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
