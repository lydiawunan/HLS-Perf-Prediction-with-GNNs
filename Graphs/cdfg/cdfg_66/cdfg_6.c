#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 976161072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, char p_5[5][5][4], short p_7,
         unsigned char p_11, double p_13)
{
  float v_25;
  long v_23;
  double v_21;
  float v_19;
  short v_17;
  short v_15;
  signed char v_9;
  long long v;
  long result;
  v_25 = (float)p_13;
  v_23 = (long)p;
  v_21 = -1594149862.17;
  v_19 = (float)p_13;
  v_17 = (short)-12933;
  v_15 = (short)p;
  result = (long)p_5[0][3][2];
  if ((unsigned long long)((double)(140.f - v_19) * (p_13 + -2.47322688586e+38)) - 
      (p % 18446744073385397907ULL) * 7361707ULL < p) {
    v_15 = (short)((long)(81 - (int)v_17 / -29961) - ! (v_23 - 541436171L));
    v_17 = (short)(-4057983488. - ((double)v_15 * p_13) * 35864.1463078);
    v_15 = (short)((double)((int)v_17 - ((int)v_17 ^ (int)((short)v_19))) / (
                   - v_21 + 622.));
  }
  else {
    v_15 = (short)((unsigned long long)(~ ((int)p_11 * (int)v_15)) * ! (
                   p + 18446744072735423430ULL));
    result = (long)((unsigned long)(-689 & (int)(~ p_7)) + (unsigned long)v_25 / (
                                                           (36272UL + (unsigned long)p_13) + 741UL));
    v_15 = (short)((int)v_15 * (int)(~ (- p_5[2][1][2])));
  }
  if ((~ (4294910747ULL - p) ^ (unsigned long long)(0 - (unsigned long)(
                                                    result % -60L))) > (unsigned long long)v_15) {
    v = (long long)(423999269ULL % (! (~ p) + 381ULL));
    result = (long)(-125LL + v);
  }
  else {
    v_17 = (short)(- p_11);
    v_9 = (signed char)(- (2170233088. / (p_13 + 887.) + (double)((int)v_15 / (
                                                                  (int)v_17 + 548))));
    result = ((long)((int)p_5[2][0][3] / ((int)p_7 + 552)) - (result + (long)v_9)) * (long)(
             -615719296.f + (float)((int)p_11 | 199));
  }
  return result;
}


