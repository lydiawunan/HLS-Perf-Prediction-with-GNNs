#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 502104130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned char p_5, double p_15[2][4], double p_17[5][1][2],
         char p_21)
{
  char v_23;
  unsigned long long v_19;
  long long v_13;
  unsigned char v_11;
  signed char v_9;
  float v_7;
  char v;
  char result;
  v_23 = (char)43;
  v_19 = 691123410ULL;
  v_11 = (unsigned char)p_17[0][0][1];
  v_9 = (signed char)122;
  v_7 = (float)p_17[4][0][0];
  v = (char)105;
  result = (char)-115;
  if ((float)((313439580L * (long)p_17[1][0][0]) / (long)((int)(~ p_21) + 864)) + (
      (v_7 + (float)p) + -27008.f) == (float)v_23) {
    result = (char)((((int)((signed char)p_17[1][0][0]) - (int)v_9) + (
                     28598 << 6)) * 83);
    v_7 = (float)p_17[1][0][0];
    v_13 = (long long)(! (1003584627L - (long)-5731767188.21));
  }
  else {
    v_13 = (long long)(v_19 - (unsigned long long)((int)(- p_21) % (! p + 214)));
    v_13 = (long long)(44893UL - (unsigned long)((unsigned int)(3431020745.15 * (double)v_13) * (
                                                 (unsigned int)v & 4294928199U)));
    v_7 = (float)(! 17906172122227419406ULL);
  }
  while ((float)(-45 >> (((int)v % (p + 221) << ((int)(- p_5) & 31)) & 7)) >= v_7) {
    result = v_13 / (long long)(((int)v_11 | (int)v_9 * 26340) + 402);
    v_9 = (signed char)(- (- (- 750.511108015)));
    v_11 = (unsigned char)(((long)((int)p_5 - 64) / -13568L) / (long)(
                           (-39 % ((int)result + 587)) / ((int)(p_15[1][3] / (
                                                                p_15[0][3] + 545.)) + 490) + 731));
    v_7 = (float)((int)v - (int)p_5 % ((int)v_9 + 959));
  }
  while_0_break: ;
  return result;
}


