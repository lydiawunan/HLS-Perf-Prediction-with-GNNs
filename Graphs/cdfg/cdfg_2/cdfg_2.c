#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 682471086
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_7, unsigned long p_13,
              long long p_15, unsigned short p_19)
{
  unsigned int v_31;
  unsigned long v_29;
  unsigned long long v_27;
  unsigned long long v_25;
  char v_23;
  unsigned char v_21;
  signed char v_17;
  unsigned long long v_11;
  unsigned long v_9;
  unsigned int v_4;
  unsigned char v;
  long long result;
  v_31 = (unsigned int)p;
  v_29 = (unsigned long)p;
  v_27 = 18446744073229043933ULL;
  v_23 = (char)p_19;
  v_21 = (unsigned char)p_19;
  v_11 = (unsigned long long)p_15;
  v_9 = p_13;
  v = (unsigned char)153;
  result = (long long)p_13;
  if ((long long)(479UL & p_7) / (result + 453LL) != (long long)(p_7 + ! (- p_13))) {
    v_25 = ! (v_11 - (unsigned long long)p_13) / 18446744072915590756ULL;
    result = (long long)((~ v_27 - 387123451ULL) / (unsigned long long)(
                         (p_15 - 4294910106LL) + 168LL));
    v_17 = (signed char)((unsigned long long)(! (p_15 * (long long)v_23)) - (
                         v_25 | (unsigned long long)(567LL / (result + 901LL))));
  }
  else {
    v_17 = (signed char)(((v_29 * (unsigned long)v) / (unsigned long)(
                          ~ v_31 + 359U)) / (v_9 + 889UL));
    v_11 = (unsigned long long)p_7;
    v_21 = (unsigned char)(! (p_15 % (long long)(v_9 + 776UL)) % (long long)(
                           (int)v_21 + 861));
  }
  if ((unsigned long long)((int)(! v_17) - (int)p_19 * (int)v_21) / (
      ((unsigned long long)p_7 / (p + 734ULL) + p / 18446744073693587783ULL) + 221ULL) != 
      (unsigned long long)(- p_7) * ! ((unsigned long long)p_15 / (p + 363ULL))) {
    v_4 = (unsigned int)(((129ULL - p) + 1541ULL) % (unsigned long long)(
                         p_7 + 702UL));
    v = (unsigned char)(95.f + (float)v_4 * 3.06626466591e+38f);
    result = (long long)(~ (- ((int)v * 24624)));
  }
  else {
    v_9 = ! (65262UL + ! p_13);
    result = (long long)(- -28651353.2879);
    result = (long long)((unsigned long long)result + - ((unsigned long long)v_9 - v_11));
  }
  return result;
}


