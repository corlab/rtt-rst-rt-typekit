#include "TypekitPlugin.hpp"

namespace rstrt_typekit {

TypekitPlugin typekit;

void loadTranslationType();
void loadRotationType();
void loadLinearAccelerationType();
void loadAngularVelocityType();

void loadJointAnglesType();
void loadJointVelocitiesType();
void loadJointAccelerationsType();
void loadJointJerksType();

void loadJointTorquesType();
void loadJointImpedanceType();
void loadForcesType();
void loadTorquesType();
void loadWrenchType();

void loadJointStateType();
void loadWeightsType();
void loadIMUType();

std::string TypekitPlugin::getName() {
    return "rst-rt";
}

bool TypekitPlugin::loadOperators() {
    return true;
}

bool TypekitPlugin::loadConstructors() {
    return true;
}

bool TypekitPlugin::loadTypes() {
    loadTranslationType();
    loadRotationType();
    loadLinearAccelerationType();
    loadAngularVelocityType();

    loadJointAnglesType();
    loadJointVelocitiesType();
    loadJointAccelerationsType();
    loadJointJerksType();

    loadJointTorquesType();
    loadJointImpedanceType();
    loadForcesType();
    loadTorquesType();
    loadWrenchType();

    loadJointStateType();
    loadWeightsType();
    loadIMUType();

    return true;
}

}

ORO_TYPEKIT_PLUGIN(rstrt_typekit::TypekitPlugin)
