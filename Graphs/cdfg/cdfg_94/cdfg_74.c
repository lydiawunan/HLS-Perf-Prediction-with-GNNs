#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895252216
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned long p_5, unsigned long long p_7,
                  float p_9[1][5][4], char p_17)
{
  unsigned int v_23;
  char v_21;
  signed char v_19;
  unsigned long long v_15;
  long long v_13;
  double v_11;
  long long v;
  unsigned char result;
  v_23 = (unsigned int)p_7;
  v_21 = (char)-41;
  v_19 = (signed char)p_9[0][4][0];
  v_15 = 18446744073709517651ULL;
  v_13 = (long long)p_17;
  v_11 = -557.590870973;
  v_11 = (double)(((int)p_17 - (int)((char)(- v_11))) | (int)v_19);
  if (((unsigned long long)(~ p_17) / ((836ULL + v_15) + 383ULL)) * (unsigned long long)(
      (unsigned long)((int)v_19 / ((int)v_21 + 596)) + p_5 / (unsigned long)(
                                                       v_23 + 987U)) <= p_7) {
    v = (long long)(100ULL - (unsigned long long)(p_5 - (unsigned long)-591.745239258f) % (
                             (unsigned long long)p_5 * p_7 + 991ULL));
    result = (unsigned char)v;
    result = (unsigned char)(- ((float)((int)((unsigned char)p) * (int)result) - - p));
  }
  else {
    v_15 = 18446744072859881579ULL;
    v = (long long)((unsigned long long)((double)(-3.08346678597e+38f * (float)p_5) / (
                                         (v_11 - (double)v_13) + 247.)) + 
                    v_15 * (unsigned long long)-9271321600.f);
    result = (unsigned char)((float)(! v % ((long long)(p_9[0][1][1] + -563123584.f) + 473LL)) * p_9[0][1][0]);
  }
  return result;
}


