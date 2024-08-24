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
	// TYPE IfcFacilityUsageEnum = ENUMERATION OF	(LATERAL	,LONGITUDINAL	,REGION	,VERTICAL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcFacilityUsageEnum : virtual public BuildingObject
	{
	public:
		enum IfcFacilityUsageEnumEnum
		{
			ENUM_LATERAL,
			ENUM_LONGITUDINAL,
			ENUM_REGION,
			ENUM_VERTICAL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcFacilityUsageEnum() = default;
		IfcFacilityUsageEnum( IfcFacilityUsageEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2447993252; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcFacilityUsageEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcFacilityUsageEnumEnum m_enum;
	};
}
