package its.propagation.itm;

public class ITM
{
	static
	{
		System.loadLibrary("itm");
	}

	public static native ITMResult ITM_P2P_TLS(double h_tx__meter, double h_rx__meter, double[] pfl,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double time, double location, double situation);

	public static native ITMIntermediateValuesResult ITM_P2P_TLS_Ex(double h_tx__meter,
			double h_rx__meter, double[] pfl, int climate, double N_0, double f__mhz, int pol,
			double epsilon, double sigma, int mdvar, double time, double location,
			double situation);

	public static native ITMResult ITM_P2P_CR(double h_tx__meter, double h_rx__meter, double[] pfl,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double confidence, double reliability);

	public static native ITMIntermediateValuesResult ITM_P2P_CR_Ex(double h_tx__meter,
			double h_rx__meter, double[] pfl, int climate, double N_0, double f__mhz, int pol,
			double epsilon, double sigma, int mdvar, double confidence, double reliability);

	public static native ITMResult ITM_AREA_TLS(double h_tx__meter, double h_rx__meter,
			int tx_site_criteria, int rx_site_criteria, double d__km, double delta_h__meter,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double time, double location, double situation);

	public static native ITMIntermediateValuesResult ITM_AREA_TLS_Ex(double h_tx__meter,
			double h_rx__meter, int tx_site_criteria, int rx_site_criteria, double d__km,
			double delta_h__meter, int climate, double N_0, double f__mhz, int pol, double epsilon,
			double sigma, int mdvar, double time, double location, double situation);

	public static native ITMResult ITM_AREA_CR(double h_tx__meter, double h_rx__meter,
			int tx_site_criteria, int rx_site_criteria, double d__km, double delta_h__meter,
			int climate, double N_0, double f__mhz, int pol, double epsilon, double sigma,
			int mdvar, double confidence, double reliability);

	public static native ITMIntermediateValuesResult ITM_AREA_CR_Ex(double h_tx__meter,
			double h_rx__meter, int tx_site_criteria, int rx_site_criteria, double d__km,
			double delta_h__meter, int climate, double N_0, double f__mhz, int pol, double epsilon,
			double sigma, int mdvar, double confidence, double reliability);

	private ITM() {}
}