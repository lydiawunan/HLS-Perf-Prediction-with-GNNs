#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 900683287
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, short p_7, unsigned char p_11, double p_13)
{
  unsigned short v_17;
  unsigned char v_15;
  signed char v_9;
  unsigned short v_5;
  double v;
  signed char result;
  v_15 = (unsigned char)p;
  v_9 = (signed char)43;
  v_5 = (unsigned short)56728;
  v = 7364470853.03;
  result = (signed char)22;
  while ((double)((unsigned long)(-125 >> 5) * 58346UL - (unsigned long)v_9) > 
         - (- p_13) + v) {
    v_15 = (int)v_15 + 84;
    v_17 = (unsigned short)(18446744072854233155ULL * (unsigned long long)p);
    v_5 = (unsigned short)result;
    v = (double)(((long long)((int)p_7 + (int)v_17) * 842821451LL) / (
                 (long long)((float)p_7 * -45.9312095642f) + 33LL));
  }
  while_0_break: ;
  while (- ((int)(v / ((double)p + 739.)) % (43923 * (int)v_5 + 85)) < (int)(
         3.44328535236e+37f - (float)p_7)) {
    v_5 = (int)v_9 - -15826;
    v_5 = (unsigned short)(4294948575UL * (unsigned long)(~ p - (long)(
                                                          (int)p_11 % (
                                                          (int)v_5 + 322))));
    v_5 = (unsigned short)(-50584 + ((int)v_5 / ((int)((unsigned short)-1.86142075909e+38) + 317) - (int)p_11));
    v = (double)(~ ((long long)(! p) / 781052441LL));
  }
  while_0_break_0: ;
  return result;
}


