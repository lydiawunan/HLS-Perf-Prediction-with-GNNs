#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648282054
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned int p_5, unsigned long long p_9, char p_13,
        float p_15)
{
  char v_23;
  long v_21;
  char v_19;
  float v_17;
  int v_11;
  short v_7;
  long long v;
  int result;
  v_21 = (long)p_15;
  v_19 = (char)90;
  v_17 = (float)p_13;
  v_7 = (short)p_15;
  v = -603550945LL;
  result = 12503;
  if ((unsigned long long)((long)(((int)v_7 | -32371) & (int)p_15) * (
                           -186397821L + (long)v_19)) <= 881152817ULL - (unsigned long long)(
                                                         - v_17 / ((float)(~ result) + 693.f))) {
    v_17 = (float)((int)(! p_13) / 629180960 + ! ((int)v_7 % 12309));
    v_7 = (short)((unsigned long long)(- v) * ~ (p_9 / (unsigned long long)(
                                                 (int)p_13 + 167)));
    v_23 = (char)(- (56421U % (p_5 + 32U)) + (unsigned int)(13741 >> (
                                                            (int)v_19 & 15)));
  }
  else {
    v_19 = (char)(! p_9);
    v_7 = (short)((unsigned int)((int)p - (int)((signed char)((float)result + v_17))) % (
                  - (p_5 % 16424U) + 537U));
    v_23 = (char)(- (79.1616134644f - (float)((long long)p_5 - v)));
  }
  if ((unsigned long long)((long)(- (! v_19)) + ! v_21 * (long)(! v_23)) != 
      (unsigned long long)v_7 / ((! p_9 | (unsigned long long)(- p)) + 210ULL)) {
    v = (long long)p_5;
    result = (int)(v - (long long)((int)(~ p) % ((int)(- p) + 717)));
  }
  else {
    v_11 = (int)((double)((int)(~ p_13) ^ (int)((char)p_15)) / (2.69862331433e+38 * (double)(
                                                                v_17 * 4294966784.f) + 184.));
    v_7 = (short)v_11;
    result = (int)((18446744073279826841ULL / (((unsigned long long)v_7 - p_9) + 551ULL)) * 18446744073704579962ULL);
  }
  return result;
}


