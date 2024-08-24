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
	// TYPE IfcCaissonFoundationTypeEnum = ENUMERATION OF	(CAISSON	,WELL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCaissonFoundationTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcCaissonFoundationTypeEnumEnum
		{
			ENUM_CAISSON,
			ENUM_WELL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcCaissonFoundationTypeEnum() = default;
		IfcCaissonFoundationTypeEnum( IfcCaissonFoundationTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 4218053802; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcCaissonFoundationTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcCaissonFoundationTypeEnumEnum m_enum;
	};
}
