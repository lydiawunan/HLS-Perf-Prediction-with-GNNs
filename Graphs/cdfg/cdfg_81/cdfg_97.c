#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33680541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[2], char p_7, unsigned short p_9, double p_17[2], int p_23)
{
  short v_25;
  signed char v_21;
  unsigned long v_19;
  long v_15;
  double v_13;
  unsigned long long v_11;
  long v_4;
  long long v;
  float result;
  v_25 = (short)p_7;
  v_21 = (signed char)-37;
  v_19 = 4294960184UL;
  v_15 = (long)p_7;
  v_11 = 18446744073709516429ULL;
  v = (long long)p_23;
  if ((long long)(3415106352U - (unsigned int)v_25) != (long long)(- p_17[1] + 33751.) - v) {
    v_25 = (short)(- ((unsigned long)v_25 * v_19 - 78UL));
    v_19 = 18765UL;
    v_15 = (long)(((v_11 * (unsigned long long)v_25) / (unsigned long long)(
                   (unsigned long)v_21 * 915527362UL + 644UL)) % (unsigned long long)(
                  p_23 + 1018));
  }
  else {
    v_19 = 62UL;
    v_4 = (long)((int)(- (~ p_7)) - -27284);
    v_25 = (short)((float)((int)p_9 * -14 >> ((v_19 - (unsigned long)v_4) & 31UL)) + -4.28665481788e+37f);
  }
  if ((long long)(- p_17[1]) + - (v ^ (long long)p_23) != (long long)(
      - (v_15 - (long)v_25) * 50340L)) {
    v_4 = (long)(- (- (! (signed char)118)));
    v = (long long)(~ (- p_7));
    result = (float)(v % (long long)(~ (v_4 % (long)((int)p[1] + 146)) + 164L));
  }
  else {
    v_13 = (double)((long long)v_15 / (v + 1020LL) | (long long)(((unsigned long)p_17[1] + v_19) + (unsigned long)v_21));
    v_11 = 4294946728ULL;
    result = (float)((double)(((unsigned long long)p_9 + v_11) + (unsigned long long)(~ p_9)) / (
                     v_13 + 619.));
  }
  return result;
}


