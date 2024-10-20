class ACE_Medical_Injuries;

class ACE_Medical_Injuries {
    class wounds;
    class wounds {
        class ThermalBurn;

        class ThermalBurn {
            pain = 0.8;
            bleeding = 0.05
        }
        class minorThermalBurn: ThermalBurn {
            pain = 0.4;
        };
        class majorThermalBurn: ThermalBurn {
            pain = 0.6;
            bleeding = 0.02;
        };
    };
    class damageTypes;
    class damageTypes {
        class burn {
            thresholds[] = {{0, 1}};
            selectionSpecific = 0;
            noBlood = 1;
            class ThermalBurn {
                weighting[] = {{0, 1}};
            };
        }
    }
}