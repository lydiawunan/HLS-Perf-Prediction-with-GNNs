#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280743524
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, float p_4, double p_6, unsigned long p_11[3][4][2],
         char p_13)
{
  double v_27;
  unsigned long long v_25;
  signed char v_23;
  long v_21;
  unsigned long v_19;
  double v_17;
  int v_15;
  unsigned long v_9;
  unsigned int v;
  char result;
  v_27 = -6.46347767363e+37;
  v_23 = (signed char)-99;
  v_21 = (long)p_6;
  v_19 = (unsigned long)p;
  v_9 = p_11[2][3][0];
  v = p;
  if ((double)((long)(- (-121 % ((int)((signed char)v_27) + 125))) * (
               (v_21 >> 23) >> (! v_9 & 31UL))) < p_6 + (double)((int)p_13 / (
                                                                 (int)((signed char)p_4) / (
                                                                 (int)v_23 + 660) + 562))) {
    v_21 = (long)(- (2U - v) * (unsigned int)v_23);
    v_15 = (int)(~ p_11[0][3][1]);
    v_17 = (double)(((long long)p_11[1][0][1] - 16934LL) / (long long)(
                    v_19 % (unsigned long)(v_21 + 147L) + 416UL) | (long long)p);
  }
  else {
    v_25 = (unsigned long long)((double)(- ((int)p_13 + 26)) + (65. + (
                                                                v_27 + 28951.)));
    v_15 = (int)((unsigned long long)p % (543158191ULL * ! v_25 + 436ULL));
    v_17 = (double)p_13;
  }
  if ((int)((unsigned char)((-3005458432.f + (float)((int)p_13 + v_15)) / (
                            (float)((unsigned long)((long)v_17 - -351576047L) * 3915296087UL) + 395.f))) <= 252) {
    v = (unsigned int)(-(char)2);
    result = (char)(((double)(! p) * ((double)p_4 + p_6)) * (double)(
                    (4294964491U * v) % ((unsigned int)p_4 + 879U)));
  }
  else {
    v_9 = 32310UL;
    result = (char)(~ (259UL | v_9) | p_11[2][3][1]);
  }
  return result;
}


