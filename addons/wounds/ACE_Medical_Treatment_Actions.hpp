class ACE_Medical_Treatment_Actions {
    class CheckPulse;
    class BasicBandage;

    class ApplyBurncover: BasicBandage {
        displayName = CSTRING(Apply_Burncover);
        displayNameProgress = CSTRING(Applying);
        condition = "true";
        treatmentLocations = 0;
        treatmentTime = 5;
        allowedSelections[] = {"Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"kat_burncover"};
        callbackSuccess = QFUNC(useBurncover);
    };
};