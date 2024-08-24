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
	// TYPE IfcStateEnum = ENUMERATION OF	(LOCKED	,READONLY	,READONLYLOCKED	,READWRITE	,READWRITELOCKED);
	class IFCQUERY_EXPORT IfcStateEnum : virtual public BuildingObject
	{
	public:
		enum IfcStateEnumEnum
		{
			ENUM_LOCKED,
			ENUM_READONLY,
			ENUM_READONLYLOCKED,
			ENUM_READWRITE,
			ENUM_READWRITELOCKED
		};

		IfcStateEnum() = default;
		IfcStateEnum( IfcStateEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 4223916898; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcStateEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcStateEnumEnum m_enum;
	};
}
