/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcLibrarySelect.h"

// TYPE IfcLibrarySelect = SELECT	(IfcLibraryInformation	,IfcLibraryReference);
shared_ptr<IFC4X3::IfcLibrarySelect> IFC4X3::IfcLibrarySelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcLibrarySelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcLibrarySelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcLibrarySelect>();
	}
	shared_ptr<IfcLibrarySelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
