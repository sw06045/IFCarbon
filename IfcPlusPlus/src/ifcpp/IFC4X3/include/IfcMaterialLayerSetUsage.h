/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMaterialUsageDefinition.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcMaterialLayerSet;
	class IFCQUERY_EXPORT IfcLayerSetDirectionEnum;
	class IFCQUERY_EXPORT IfcDirectionSenseEnum;
	class IFCQUERY_EXPORT IfcLengthMeasure;
	class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
	//ENTITY
	class IFCQUERY_EXPORT IfcMaterialLayerSetUsage : public IfcMaterialUsageDefinition
	{
	public:
		IfcMaterialLayerSetUsage() = default;
		IfcMaterialLayerSetUsage( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1303795690; }

		// IfcMaterialUsageDefinition -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRelAssociatesMaterial> >	m_AssociatedTo_inverse;

		// IfcMaterialLayerSetUsage -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcMaterialLayerSet>						m_ForLayerSet;
		shared_ptr<IfcLayerSetDirectionEnum>				m_LayerSetDirection;
		shared_ptr<IfcDirectionSenseEnum>					m_DirectionSense;
		shared_ptr<IfcLengthMeasure>						m_OffsetFromReferenceLine;
		shared_ptr<IfcPositiveLengthMeasure>				m_ReferenceExtent;			//optional
	};
}
