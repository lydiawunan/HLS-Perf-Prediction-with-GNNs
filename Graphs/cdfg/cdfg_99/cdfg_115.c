#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625526743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, char p_4, unsigned long long p_13, double p_17,
                  unsigned long p_21[1])
{
  unsigned char v_23;
  char v_19;
  unsigned int v_15;
  unsigned long v_11;
  float v_9;
  int v_7;
  unsigned short v;
  unsigned char result;
  v_23 = (unsigned char)p_21[0];
  v_19 = (char)41;
  v_15 = (unsigned int)p;
  v_11 = 4294907460UL;
  if (! p_21[0] - (unsigned long)(v_15 * (unsigned int)(! p_4)) != 27359UL) {
    v_9 = (float)((unsigned long long)p_21[0] - ~ (p_13 - (unsigned long long)v_23));
    v_19 = (char)((unsigned long)(-44452. - p) & ((v_11 - (unsigned long)p) & (
                                                  (unsigned long)p_17 & v_11)));
    v_7 = (int)(~ p_13 * 4294951586ULL);
  }
  else {
    v_7 = (int)(! (v_15 % ((unsigned int)(1959191680.f / ((float)p_21[0] + 924.f)) + 733U)));
    v_9 = (float)4294913120UL;
    v_7 = (int)((long long)(-44 + v_7 / ((int)p_17 + 159)) + ~ (327263710LL / (long long)(
                                                                p_21[0] + 236UL)));
  }
  if ((double)(p_13 % (unsigned long long)((int)((double)v_15 + p_17) / (
                                           (-15467 - (int)v_19) + 1015) + 729)) < 
      ((double)(v_7 % 182) + 7093332725.11) * (double)v_15) {
    v = (unsigned short)((float)(- v_7 / -28232) / ((-5242781184.f / (
                                                     v_9 + 229.f) + (float)(! v_11)) + 289.f));
    result = (unsigned char)((int)p_4 / ((int)(~ (! v)) + 196));
    result = (unsigned char)((int)(- (- p)) << ((int)result * -126 & 31));
  }
  else {
    v_11 = (unsigned long)(- 3.96871528307e+37);
    result = (unsigned char)v_11;
  }
  return result;
}


