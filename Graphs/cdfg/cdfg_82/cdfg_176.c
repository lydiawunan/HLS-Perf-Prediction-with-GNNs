#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 296436560
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, long long p_4, unsigned long long p_9,
          unsigned long long p_11[5][5][5], unsigned long long p_23[5][1])
{
  unsigned long long v_25;
  long v_21;
  float v_19;
  long v_17;
  char v_15;
  unsigned short v_13;
  unsigned char v_7;
  char v;
  short result;
  v_21 = 295785985L;
  v_19 = (float)p_4;
  v_17 = -973280252L;
  v_15 = (char)102;
  v_13 = (unsigned short)p_9;
  v_7 = (unsigned char)p_23[3][0];
  v = (char)p_23[0][0];
  result = (short)18272;
  if (((unsigned long long)(-121 * (int)v_15) + ~ p_23[0][0]) * ((18446744073333518216ULL - p_11[2][3][2]) + (unsigned long long)(
                                                                 (float)v_7 * -8.53999983446e+37f)) == 4835ULL) {
    v_17 = 46759L;
    v_19 = (float)((unsigned long long)(- v_17 * 84L) - p_11[2][4][4]);
    v_13 = (unsigned short)(255ULL ^ (p_9 - (unsigned long long)v_21));
  }
  else {
    v_25 = (unsigned long long)p_4 % (- p_11[2][3][1] + 123ULL) - (unsigned long long)(
           (int)(~ v_13) % (((int)v + (int)v_15) + 978));
    v_13 = (unsigned short)v_25;
    v_7 = (unsigned char)((unsigned long long)p & (unsigned long long)(
                                                  (int)((unsigned char)-2.25250234641e+38f) / 254) % (
                                                  (167343186ULL + p_23[4][0]) + 552ULL));
  }
  if ((unsigned long long)((float)((long)result - v_21) / (- v_19 + 103.f) + (float)(
                           (32924LL * (long long)v_7) / (long long)((int)result + 238))) > - (- (
      p_23[0][0] - 935935494ULL))) {
    v_7 = (unsigned char)p_9;
    v = (char)(~ ((unsigned long long)v_7 * 18446744069625855713ULL));
    result = (short)(! p | ((p_4 - -344603006LL) - (long long)(! v)));
  }
  else {
    v_15 = (char)((3624740259U ^ (unsigned int)((float)v_17 / (v_19 + 819.f))) * (unsigned int)(- v_13));
    result = (short)(- ((47792ULL + p_11[2][4][4]) | (unsigned long long)(
                        (int)v_13 / ((int)v_15 + 724))));
    result = (short)((int)result % 1);
  }
  return result;
}


