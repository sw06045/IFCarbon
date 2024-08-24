/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCableCarrierFittingTypeEnum.h"

// TYPE IfcCableCarrierFittingTypeEnum = ENUMERATION OF	(BEND	,CONNECTOR	,CROSS	,JUNCTION	,REDUCER	,TEE	,TRANSITION	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcCableCarrierFittingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCCABLECARRIERFITTINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BEND:	stream << ".BEND."; break;
		case ENUM_CONNECTOR:	stream << ".CONNECTOR."; break;
		case ENUM_CROSS:	stream << ".CROSS."; break;
		case ENUM_JUNCTION:	stream << ".JUNCTION."; break;
		case ENUM_REDUCER:	stream << ".REDUCER."; break;
		case ENUM_TEE:	stream << ".TEE."; break;
		case ENUM_TRANSITION:	stream << ".TRANSITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCableCarrierFittingTypeEnum> IFC4X3::IfcCableCarrierFittingTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcCableCarrierFittingTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCableCarrierFittingTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCableCarrierFittingTypeEnum>(); }
	shared_ptr<IfcCableCarrierFittingTypeEnum> type_object( new IfcCableCarrierFittingTypeEnum() );
	if( std_iequal( arg, ".BEND." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_BEND;
	}
	else if( std_iequal( arg, ".CONNECTOR." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_CONNECTOR;
	}
	else if( std_iequal( arg, ".CROSS." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_CROSS;
	}
	else if( std_iequal( arg, ".JUNCTION." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_JUNCTION;
	}
	else if( std_iequal( arg, ".REDUCER." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_REDUCER;
	}
	else if( std_iequal( arg, ".TEE." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_TEE;
	}
	else if( std_iequal( arg, ".TRANSITION." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_TRANSITION;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCableCarrierFittingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
