#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203181939
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, long p_5, unsigned char p_9[4][1], char p_11,
          unsigned int p_13)
{
  signed char v_27;
  unsigned long long v_25;
  char v_23;
  unsigned char v_21;
  signed char v_19;
  float v_17;
  char v_15;
  unsigned long v_7;
  long long v;
  short result;
  v_27 = (signed char)-54;
  v_23 = (char)-1;
  v_19 = (signed char)p_13;
  v = -55701LL;
  if ((long long)(-1036222272L | (long)v_19) != v) {
    v_19 = ! (- p);
    result = (short)((p_5 % (p_5 + 687L)) * (48333L >> ((int)p_11 & 31)) << (
                     ((unsigned int)((int)p * (int)v_19) - ~ p_13) & 31U));
    v_21 = (unsigned char)(4294946204U - (unsigned int)(- ((int)result % 31704)));
  }
  else {
    v_25 = (unsigned long long)(~ ((long long)p_5 / (889793013LL % (long long)(
                                                     (int)v_27 + 6) + 27LL)));
    v_21 = (unsigned char)(! (! v_25 * ~ v_25));
    v_23 = (char)(! 18446744073709487374ULL);
  }
  if (~ p_13 % (unsigned int)((int)(~ p_11) + 777) + 646U >= (unsigned int)v_23) {
    v = (long long)p_13;
    v_7 = (unsigned long)(! (char)69);
    result = (short)((v - (long long)p) % (long long)((((unsigned long)p_5 - v_7) << (
                                                       (int)p_9[2][0] / (
                                                       (int)p_11 + 892) & 31)) + 839UL));
  }
  else {
    v_17 = (float)(~ ((int)p * (int)p - (int)v_19 % ((int)v_21 + 149)));
    v_15 = (char)(1 - (int)((unsigned char)((1.22169669306e+38 + (double)v_17) * (double)(
                                            -1069451793LL + (long long)p_5))));
    result = (short)((long)(~ (! v_15)) % (! p_5 + 997L));
  }
  return result;
}


