#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 422797511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, long long p_5, long p_9,
                   long p_13[4][1], short p_15[2][4])
{
  unsigned long long v_25;
  unsigned char v_23;
  unsigned short v_21;
  signed char v_19;
  long v_17;
  long long v_11;
  long long v_7;
  unsigned char v;
  unsigned short result;
  v_25 = (unsigned long long)p;
  v_23 = (unsigned char)p_13[2][0];
  v_19 = (signed char)p_9;
  v_17 = (long)p;
  v_11 = p_5;
  v_7 = -568806920LL;
  if ((unsigned long long)((long)p * (v_17 + 15L)) / (56823ULL % (v_25 + 519ULL) + 1011ULL) <= (unsigned long long)(
      (! p_9 >> (- v_17 & 31L)) * ((p_9 | 25351L) - (long)(~ p)))) {
    result = (unsigned short)(! ((long)((int)v_23 * (int)p) - p_13[1][0]));
    v_21 = (unsigned short)((int)p_15[1][1] * (int)v_23);
    v_19 = (signed char)v_21;
  }
  else {
    result = (unsigned short)24186;
    v = (unsigned char)p_15[1][1];
    v_7 = (long long)(! ((p_9 * (long)p_15[0][1]) / (long)((int)v + 755)));
  }
  if (- (-19591LL + (long long)p) != p_5 * ~ v_7 + ! p_5 * (long long)(- p)) {
    v_7 = (long long)p_13[2][0];
    v = (unsigned char)(! (v_11 - (long long)p_13[0][0]) - (long long)(
                        (int)p_15[0][0] / ((int)((signed char)1.70295034674e+37) / 20 + 443)));
    result = (unsigned short)((long long)v / ((((long long)p - p_5) - 
                                               v_7 / (long long)(p_9 + 78L)) + 499LL));
  }
  else {
    v_17 = (long)(p_5 * (long long)(26231 * (int)v_19) - (long long)(
                  (int)result << 7));
    result = (unsigned short)(! ((long long)v_17 % -62619043LL) / 53735LL);
    result = (unsigned short)((long long)result * (-235LL % (- p_5 + 403LL)));
  }
  return result;
}


