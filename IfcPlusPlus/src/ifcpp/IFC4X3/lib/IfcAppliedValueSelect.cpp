/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcValue.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcAbsorbedDoseMeasure.h"
#include "ifcpp/IFC4X3/include/IfcAccelerationMeasure.h"
#include "ifcpp/IFC4X3/include/IfcAngularVelocityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcAreaDensityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcCompoundPlaneAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcCurvatureMeasure.h"
#include "ifcpp/IFC4X3/include/IfcDoseEquivalentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcDynamicViscosityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricCapacitanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricChargeMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricConductanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricResistanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricVoltageMeasure.h"
#include "ifcpp/IFC4X3/include/IfcEnergyMeasure.h"
#include "ifcpp/IFC4X3/include/IfcForceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcFrequencyMeasure.h"
#include "ifcpp/IFC4X3/include/IfcHeatFluxDensityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcHeatingValueMeasure.h"
#include "ifcpp/IFC4X3/include/IfcIlluminanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcInductanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcIntegerCountRateMeasure.h"
#include "ifcpp/IFC4X3/include/IfcIonConcentrationMeasure.h"
#include "ifcpp/IFC4X3/include/IfcIsothermalMoistureCapacityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcKinematicViscosityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLinearForceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLinearMomentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLinearStiffnessMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLinearVelocityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLuminousFluxMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLuminousIntensityDistributionMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMagneticFluxDensityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMagneticFluxMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMassDensityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMassFlowRateMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMassPerLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfElasticityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfLinearSubgradeReactionMeasure.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfRotationalSubgradeReactionMeasure.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfSubgradeReactionMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMoistureDiffusivityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMolecularWeightMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMomentOfInertiaMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMonetaryMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPHMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPlanarForceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPowerMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPressureMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRadioActivityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRotationalFrequencyMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRotationalMassMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRotationalStiffnessMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSectionModulusMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSectionalAreaIntegralMeasure.h"
#include "ifcpp/IFC4X3/include/IfcShearModulusMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSoundPowerLevelMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSoundPowerMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSoundPressureLevelMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSoundPressureMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSpecificHeatCapacityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcTemperatureGradientMeasure.h"
#include "ifcpp/IFC4X3/include/IfcTemperatureRateOfChangeMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermalAdmittanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermalConductivityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermalExpansionCoefficientMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermalResistanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermalTransmittanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcTorqueMeasure.h"
#include "ifcpp/IFC4X3/include/IfcVaporPermeabilityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcVolumetricFlowRateMeasure.h"
#include "ifcpp/IFC4X3/include/IfcWarpingConstantMeasure.h"
#include "ifcpp/IFC4X3/include/IfcWarpingMomentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcAmountOfSubstanceMeasure.h"
#include "ifcpp/IFC4X3/include/IfcAreaMeasure.h"
#include "ifcpp/IFC4X3/include/IfcComplexNumber.h"
#include "ifcpp/IFC4X3/include/IfcContextDependentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcCountMeasure.h"
#include "ifcpp/IFC4X3/include/IfcDescriptiveMeasure.h"
#include "ifcpp/IFC4X3/include/IfcElectricCurrentMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLuminousIntensityMeasure.h"
#include "ifcpp/IFC4X3/include/IfcMassMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNumericMeasure.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositivePlaneAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSolidAngleMeasure.h"
#include "ifcpp/IFC4X3/include/IfcThermodynamicTemperatureMeasure.h"
#include "ifcpp/IFC4X3/include/IfcTimeMeasure.h"
#include "ifcpp/IFC4X3/include/IfcVolumeMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSimpleValue.h"
#include "ifcpp/IFC4X3/include/IfcBinary.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcDate.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"
#include "ifcpp/IFC4X3/include/IfcDuration.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcInteger.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4X3/include/IfcReal.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcTime.h"
#include "ifcpp/IFC4X3/include/IfcTimeStamp.h"
#include "ifcpp/IFC4X3/include/IfcURIReference.h"
#include "ifcpp/IFC4X3/include/IfcAppliedValueSelect.h"

// TYPE IfcAppliedValueSelect = SELECT	(IfcMeasureWithUnit	,IfcReference	,IfcValue);
shared_ptr<IFC4X3::IfcAppliedValueSelect> IFC4X3::IfcAppliedValueSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcAppliedValueSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcAppliedValueSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcAppliedValueSelect>();
	}
	shared_ptr<IfcAppliedValueSelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
