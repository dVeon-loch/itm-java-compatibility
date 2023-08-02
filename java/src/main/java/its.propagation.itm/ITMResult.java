package its.propagation.itm;

public class ITMResult
{
	public final double transmissionLoss_dB;
	public final long warnings;


	public final int errorCode;

	public ITMResult(double transmissionLoss_dB, long warnings, int errorCode) {
		this.transmissionLoss_dB = transmissionLoss_dB;
		this.warnings = warnings;
		this.errorCode = errorCode;
	}
}
