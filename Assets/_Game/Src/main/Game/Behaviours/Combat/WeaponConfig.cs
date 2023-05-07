using UnityEngine;

namespace Desire.Game.Behaviours.Combat
{
    [CreateAssetMenu(fileName = "WeaponConfig", menuName = "ScriptableObjects/Weapons/Weapon Config")]
    public class WeaponConfig: ScriptableObject
    {
        public string nameAnimation;
        public string tagAnimation = "Attack";
        public float radius;
        public LayerMask layer;
        public float baseDamage;
    }
}