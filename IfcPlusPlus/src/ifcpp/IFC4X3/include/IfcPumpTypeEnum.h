/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcPumpTypeEnum = ENUMERATION OF	(CIRCULATOR	,ENDSUCTION	,SPLITCASE	,SUBMERSIBLEPUMP	,SUMPPUMP	,VERTICALINLINE	,VERTICALTURBINE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcPumpTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcPumpTypeEnumEnum
		{
			ENUM_CIRCULATOR,
			ENUM_ENDSUCTION,
			ENUM_SPLITCASE,
			ENUM_SUBMERSIBLEPUMP,
			ENUM_SUMPPUMP,
			ENUM_VERTICALINLINE,
			ENUM_VERTICALTURBINE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcPumpTypeEnum() = default;
		IfcPumpTypeEnum( IfcPumpTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 473029300; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPumpTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcPumpTypeEnumEnum m_enum;
	};
}
