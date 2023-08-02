package its.propagation.itm;

public class ITM
{
	static
	{
		System.loadLibrary("itm");
	}

	public static native ITMResult ITMP2PTLS(double h_tx__meter, double h_rx__meter, double[] pfl,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double time, double location, double situation);

	public static native ITMIntermediateValuesResult ITMP2PTLSEx(double h_tx__meter,
			double h_rx__meter, double[] pfl, int climate, double N_0, double f__mhz, int pol,
			double epsilon, double sigma, int mdvar, double time, double location,
			double situation);

	public static native ITMResult ITMP2PCR(double h_tx__meter, double h_rx__meter, double[] pfl,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double confidence, double reliability);

	public static native ITMIntermediateValuesResult ITMP2PCREx(double h_tx__meter,
			double h_rx__meter, double[] pfl, int climate, double N_0, double f__mhz, int pol,
			double epsilon, double sigma, int mdvar, double confidence, double reliability);

	public static native ITMResult ITMAREATLS(double h_tx__meter, double h_rx__meter,
			int tx_site_criteria, int rx_site_criteria, double d__km, double delta_h__meter,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double time, double location, double situation);

	public static native ITMIntermediateValuesResult ITMAREATLSEx(double h_tx__meter,
			double h_rx__meter, int tx_site_criteria, int rx_site_criteria, double d__km,
			double delta_h__meter, int climate, double N_0, double f__mhz, int pol, double epsilon,
			double sigma, int mdvar, double time, double location, double situation);

	public static native ITMResult ITMAREACR(double h_tx__meter, double h_rx__meter,
			int tx_site_criteria, int rx_site_criteria, double d__km, double delta_h__meter,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double confidence, double reliability);

	public static native ITMIntermediateValuesResult ITMAREACREx(double h_tx__meter,
			double h_rx__meter, int tx_site_criteria, int rx_site_criteria, double d__km,
			double delta_h__meter, int climate, double N_0, double f__mhz, int pol, double epsilon,
			double sigma, int mdvar, double confidence, double reliability);

	private ITM() {}
}