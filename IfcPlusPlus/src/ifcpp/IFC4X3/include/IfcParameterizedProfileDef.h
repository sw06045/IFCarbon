/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcProfileDef.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcAxis2Placement2D;
	//ENTITY
	class IFCQUERY_EXPORT IfcParameterizedProfileDef : public IfcProfileDef
	{
	public:
		IfcParameterizedProfileDef() = default;
		IfcParameterizedProfileDef( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2529465313; }

		// IfcProfileDef -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcProfileTypeEnum>								m_ProfileType;
		//  shared_ptr<IfcLabel>										m_ProfileName;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
		//  std::vector<weak_ptr<IfcProfileProperties> >				m_HasProperties_inverse;

		// IfcParameterizedProfileDef -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcAxis2Placement2D>								m_Position;					//optional
	};
}
