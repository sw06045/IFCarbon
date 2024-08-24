/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcArcIndex.h"
#include "ifcpp/IFC4X3/include/IfcLineIndex.h"
#include "ifcpp/IFC4X3/include/IfcSegmentIndexSelect.h"

// TYPE IfcSegmentIndexSelect = SELECT	(IfcArcIndex	,IfcLineIndex);
shared_ptr<IFC4X3::IfcSegmentIndexSelect> IFC4X3::IfcSegmentIndexSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcSegmentIndexSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcSegmentIndexSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcSegmentIndexSelect>();
	}
	shared_ptr<IfcSegmentIndexSelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
