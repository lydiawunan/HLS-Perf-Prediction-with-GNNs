#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440791882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, double p_7, float p_9[4][4],
                       unsigned short p_11, double p_13)
{
  long long v_21;
  unsigned long long v_19;
  short v_17;
  unsigned char v_15;
  unsigned long long v_5;
  double v;
  unsigned long long result;
  v_19 = 18446744073709493143ULL;
  v_17 = (short)p_9[3][3];
  v_15 = (unsigned char)20;
  v_5 = (unsigned long long)p_11;
  v = (double)p_9[0][0];
  result = (unsigned long long)p_7;
  if ((long long)((int)p_11 / (((int)p_11 << ((int)p & 15)) / ((int)v_15 + 909) + 51)) == 
      (long long)((long)((double)p_9[1][0] + v) / 24869L) + -4519LL) {
    v_5 = (500066919ULL % (unsigned long long)((int)p_11 + 207) - (unsigned long long)(
           17633 - (int)p)) % (- v_19 + 381ULL);
    v_5 = v_5;
    v_15 = (unsigned char)((double)((422747332ULL % (v_5 + 226ULL)) / (unsigned long long)(
                                    236 / ((int)((unsigned char)p_9[1][1]) + 682) + 832)) / (
                           (2.58382544566e+38 + v) / (- p_7 + 200.) + 457.));
  }
  else {
    v_15 = (unsigned char)(! v_19 / (result + 366ULL));
    v_21 = (long long)v_19;
    v = (double)((int)p / ((int)p_11 + 676)) / (((double)v_21 - p_13) + 74.) - (double)(
        (float)result - (121539432.f + p_9[2][3]));
  }
  if (((double)(-669.634887695f + (float)p) - p_13) + (double)((unsigned long long)p - v_5) >= (double)(~ (
      ((int)((unsigned char)v) & (int)v_15) - (int)v_17 * 952033333))) {
    v_5 = (unsigned long long)((double)(! v_5 ^ (unsigned long long)(
                                        (int)p_11 % ((int)((unsigned short)p_13) + 439))) - v);
    v = (double)((float)v_5 / (p_9[1][1] + 729.f));
    result = (unsigned long long)(~ ((int)p / ((int)((short)v) + 421))) * (
             ! v_5 % ((unsigned long long)(- p_7) + 942ULL));
  }
  else result = (unsigned long long)p_11;
  return result;
}


