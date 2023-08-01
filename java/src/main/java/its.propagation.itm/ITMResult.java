package its.propagation.itm;

public class ITMResult
{
	public final double transmissionLoss_dB;
	public final long[] warnings;


	public final int errorCode;

	public ITMResult(double transmissionLoss_dB, long[] warnings, int errorCode) {
		this.transmissionLoss_dB = transmissionLoss_dB;
		this.warnings = warnings;
		this.errorCode = errorCode;
	}

	public class IntermediateValues
	{
		public double[] theta_hzn = new double[2];        // Terminal horizon angles
		public double[] d_hzn__meter = new double[2];     // Terminal horizon distances, in meters
		public double[] h_e__meter = new double[2];       // Terminal effective heights, in meters
		public double N_s;                 // Surface refractivity, in N-Units
		public double delta_h__meter;      // Terrain irregularity parameter, in meters
		public double A_ref__db;           // Reference attenuation, in dB
		public double A_fs__db;            // Free space basic transmission loss, in dB
		public double d__km;               // Path distance, in km
		public int mode;                   // Mode of propagation value
	};
}
