namespace Desire.Game.Commons
{
    public interface IParryeable
    {
        public bool WasParried { get; set; }
        public bool IsVunerableToParry { get; }
        public void TakeParry();
        public void EnableParry();
        public void DisableParry();
    }
}
