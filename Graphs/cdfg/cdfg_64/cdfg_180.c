#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 338014170
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p[4], char p_7, short p_9[2][5],
              unsigned long p_11, unsigned int p_13)
{
  unsigned long v_17;
  long v_15;
  double v_5;
  long v;
  long long result;
  v_17 = 496872228UL;
  v_15 = 429011156L;
  v = (long)p_7;
  if (- (((unsigned long)p[3] + p_11) << (! v_15 & 31L)) == (unsigned long)(
      (-6.06243910472e+37f / ((float)((unsigned int)p[0] - p_13) + 750.f)) / (
      (float)p_7 + 89.f))) {
    v_15 = - v_15;
    result = (long long)(~ ((unsigned long)p_13 / (p_11 + 364UL)) ^ (
                         (unsigned long)((long)p_9[0][3] % (v_15 + 925L)) - 4294951101UL));
    v_5 = (double)(! (- (v * -12L)));
  }
  else {
    result = (long long)((42UL / ((36140UL | v_17) + 429UL)) * (unsigned long)5161421824.f);
    v = (long)(! (p_13 - 24759768U) - ((unsigned int)(14347 ^ (int)p[1]) + 477212873U));
    v_5 = (double)((long long)(- (- p_9[0][3])) + (1LL ^ (long long)p[2] % (
                                                         result + 645LL)));
  }
  if (- result + (long long)(27384 & (int)(~ p[3])) == (long long)((unsigned long)p_13 + (
                                                                   (unsigned long)(
                                                                   (int)p_7 * (int)p_9[0][3]) - 
                                                                   (unsigned long)p[1] / (
                                                                   p_11 + 418UL)))) 
    result = (long long)(~ p[0]);
  else {
    v = ((34636L + v) / ((long)(v_5 / 2.36846032133) + 67L)) * (long)(! p_7);
    result = (long long)(-89L - -53L / (v + 982L)) % ((-3461LL - - result) + 945LL);
    result = result;
  }
  return result;
}


