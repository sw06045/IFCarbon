/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcInteger.h"

namespace IFC4X3
{
	// TYPE IfcPositiveInteger = IfcInteger;
	class IFCQUERY_EXPORT IfcPositiveInteger : public IfcInteger
	{
	public:
		IfcPositiveInteger() = default;
		IfcPositiveInteger( int value ) { m_value = value; }
		virtual uint32_t classID() const { return 1790229001; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPositiveInteger> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
	};
}
