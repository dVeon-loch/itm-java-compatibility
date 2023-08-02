package its.propagation.itm;

public class ITMIntermediateValuesResult extends ITMResult
{
	public final IntermediateValues intermediateValues;

	public ITMIntermediateValuesResult(double transmissionLoss_dB, long warnings,
			IntermediateValues intermediateValues, int errorCode) {
		super(transmissionLoss_dB, warnings, errorCode);
		this.intermediateValues = intermediateValues;
	}

	public static class IntermediateValues
	{
		public double theta_hzn_0;        // Terminal horizon angle 0
		public double theta_hzn_1;        // Terminal horizon angle 1
		public double d_hzn__meter_0;     // Terminal horizon distance 0, in meters
		public double d_hzn__meter_1;     // Terminal horizon distance 1, in meters
		public double h_e__meter_0;       // Terminal effective height 0, in meters
		public double h_e__meter_1;       // Terminal effective height 1, in meters
		public double N_s;                 // Surface refractivity, in N-Units
		public double delta_h__meter;      // Terrain irregularity parameter, in meters
		public double A_ref__db;           // Reference attenuation, in dB
		public double A_fs__db;            // Free space basic transmission loss, in dB
		public double d__km;               // Path distance, in km
		public int mode;                   // Mode of propagation value
	};
}
