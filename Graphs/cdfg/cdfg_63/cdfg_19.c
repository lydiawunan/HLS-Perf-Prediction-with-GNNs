#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065474014
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, short p_11, float p_15, int p_19, unsigned long long p_21)
{
  unsigned long v_27;
  signed char v_25;
  short v_23;
  int v_17;
  double v_13;
  long v_8;
  signed char v_6;
  double v_4;
  float v;
  int result;
  v_27 = (unsigned long)p_21;
  v_25 = (signed char)p_21;
  v_23 = (short)-30430;
  v_13 = -6381233709.3;
  v_8 = (long)p_15;
  v_6 = (signed char)p_21;
  v_4 = (double)p_11;
  while ((unsigned long long)(- (- p) + v_13) >= - (- (p_21 / (unsigned long long)(
                                                       p_19 + 459)))) {
    v_8 = (long long)v_27 / (((long long)v_25 - -63945LL) + 797LL);
    v_27 = (unsigned long)(473373446U / ((unsigned int)-8221766656.f + 396U));
    v_6 = (signed char)(- ((int)((signed char)v_4) * (int)v_6 + 577947765));
    v_13 = (double)v_6;
  }
  while_0_break: ;
  if ((24694ULL % (p_21 % (p_21 + 212ULL) + 984ULL) | (unsigned long long)v_23) == (unsigned long long)(
      (231042650L - (long)((int)p_11 % ((int)p_11 + 460))) - 124L)) {
    v_6 = (signed char)78;
    v = (float)(! v_8 * (long)(- (4294933974. - p)));
    result = (int)(- ((double)v * (v_4 / ((double)v_6 + 558.))));
  }
  else {
    v_17 = (int)(- ((unsigned long long)v_6 % ((49529ULL - (unsigned long long)p_19) + 755ULL)));
    v_13 = (double)(- (~ v_17));
    result = (int)((unsigned long long)((double)p_11 + (v_13 + (double)p_15)));
  }
  return result;
}


