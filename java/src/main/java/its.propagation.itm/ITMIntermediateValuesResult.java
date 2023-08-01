package its.propagation.itm;

public class ITMIntermediateValuesResult extends ITMResult
{
	public final IntermediateValues intermediateValues;

	public ITMIntermediateValuesResult(double transmissionLoss_dB, long[] warnings,
			IntermediateValues intermediateValues, int errorCode) {
		super(transmissionLoss_dB, warnings, errorCode);
		this.intermediateValues = intermediateValues;
	}
}
