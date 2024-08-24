/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcPropertySetTemplateTypeEnum.h"

// TYPE IfcPropertySetTemplateTypeEnum = ENUMERATION OF	(PSET_MATERIALDRIVEN	,PSET_OCCURRENCEDRIVEN	,PSET_PERFORMANCEDRIVEN	,PSET_PROFILEDRIVEN	,PSET_TYPEDRIVENONLY	,PSET_TYPEDRIVENOVERRIDE	,QTO_OCCURRENCEDRIVEN	,QTO_TYPEDRIVENONLY	,QTO_TYPEDRIVENOVERRIDE	,NOTDEFINED);
void IFC4X3::IfcPropertySetTemplateTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCPROPERTYSETTEMPLATETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_PSET_MATERIALDRIVEN:	stream << ".PSET_MATERIALDRIVEN."; break;
		case ENUM_PSET_OCCURRENCEDRIVEN:	stream << ".PSET_OCCURRENCEDRIVEN."; break;
		case ENUM_PSET_PERFORMANCEDRIVEN:	stream << ".PSET_PERFORMANCEDRIVEN."; break;
		case ENUM_PSET_PROFILEDRIVEN:	stream << ".PSET_PROFILEDRIVEN."; break;
		case ENUM_PSET_TYPEDRIVENONLY:	stream << ".PSET_TYPEDRIVENONLY."; break;
		case ENUM_PSET_TYPEDRIVENOVERRIDE:	stream << ".PSET_TYPEDRIVENOVERRIDE."; break;
		case ENUM_QTO_OCCURRENCEDRIVEN:	stream << ".QTO_OCCURRENCEDRIVEN."; break;
		case ENUM_QTO_TYPEDRIVENONLY:	stream << ".QTO_TYPEDRIVENONLY."; break;
		case ENUM_QTO_TYPEDRIVENOVERRIDE:	stream << ".QTO_TYPEDRIVENOVERRIDE."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPropertySetTemplateTypeEnum> IFC4X3::IfcPropertySetTemplateTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcPropertySetTemplateTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPropertySetTemplateTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPropertySetTemplateTypeEnum>(); }
	shared_ptr<IfcPropertySetTemplateTypeEnum> type_object( new IfcPropertySetTemplateTypeEnum() );
	if( std_iequal( arg, ".PSET_MATERIALDRIVEN." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_MATERIALDRIVEN;
	}
	else if( std_iequal( arg, ".PSET_OCCURRENCEDRIVEN." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_OCCURRENCEDRIVEN;
	}
	else if( std_iequal( arg, ".PSET_PERFORMANCEDRIVEN." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_PERFORMANCEDRIVEN;
	}
	else if( std_iequal( arg, ".PSET_PROFILEDRIVEN." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_PROFILEDRIVEN;
	}
	else if( std_iequal( arg, ".PSET_TYPEDRIVENONLY." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_TYPEDRIVENONLY;
	}
	else if( std_iequal( arg, ".PSET_TYPEDRIVENOVERRIDE." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_PSET_TYPEDRIVENOVERRIDE;
	}
	else if( std_iequal( arg, ".QTO_OCCURRENCEDRIVEN." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_QTO_OCCURRENCEDRIVEN;
	}
	else if( std_iequal( arg, ".QTO_TYPEDRIVENONLY." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_QTO_TYPEDRIVENONLY;
	}
	else if( std_iequal( arg, ".QTO_TYPEDRIVENOVERRIDE." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_QTO_TYPEDRIVENOVERRIDE;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPropertySetTemplateTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
