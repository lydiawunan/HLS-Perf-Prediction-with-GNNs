//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103635743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, double p_5, unsigned char p_7,
          unsigned long long p_15, double p_17)
{
  long long v_21;
  int v_19;
  char v_13;
  unsigned char v_11;
  unsigned char v_9;
  signed char v;
  float result;
  v_21 = 245251909LL;
  v_19 = (int)p_15;
  v_13 = (char)112;
  v_9 = (unsigned char)p_17;
  v_21 = (long long)((18446744073563102940ULL % ((unsigned long long)(
                                                 v_19 / 195) * (p_15 + (unsigned long long)v_21) + 112ULL)) % (unsigned long long)(
                     ~ (! ((int)((short)p_5) / 25036)) + 659));
  v_11 = (unsigned char)(((long long)(((double)p_15 + p_17) * (-9.46527759464e+35 + p_5)) % (
                          10579LL * ((long long)v_19 / (v_21 + 50LL)) + 995LL)) / (long long)(
                         - (95 + ((int)p_7 << ((int)((unsigned char)-4876513792.f) & 7))) + 763));
  v = (signed char)(~ (- (4161498527UL % (unsigned long)((int)v_11 + 908) - (unsigned long)(- v_13))));
  result = (float)(227. / (((double)((int)v >> ((int)p & 7)) + p_5 * (double)p_7) + 318.) - (double)(
                   (-87 % ((int)(- v_9) + 1005)) / ((int)p_5 + 223)));
  return result;
}


