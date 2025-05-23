// Write a C program to create an extended ASCII table. Print the ASCII values 32 through 255.
// Sample Output:

// |---------------------------------------------------------------------------------------------------------|
// |extended ASCII table - excluding control characters                                                      |
// |   Ch Dec  Hex  |  Ch Dec  Hex   | Ch Dec  Hex | Ch Dec  Hex  | Ch Dec  Hex  | Ch Dec  Hex | Ch Dec  Hex |
// |----------------|----------------|-------------|--------------|--------------|-------------|-------------|
// |   har  32 0x20 |  @har  64 0x40 |  `  96 0x60 |  � 128 0x80 |  � 160 0xa0 |  � 192 0xc0 |  � 224 0xe0 |
// |  !har  33 0x21 |  Ahar  65 0x41 |  a  97 0x61 |  � 129 0x81 |  � 161 0xa1 |  � 193 0xc1 |  � 225 0xe1 |
// |  "har  34 0x22 |  Bhar  66 0x42 |  b  98 0x62 |  � 130 0x82 |  � 162 0xa2 |  � 194 0xc2 |  � 226 0xe2 |
// |  #har  35 0x23 |  Char  67 0x43 |  c  99 0x63 |  � 131 0x83 |  � 163 0xa3 |  � 195 0xc3 |  � 227 0xe3 |
// |  $har  36 0x24 |  Dhar  68 0x44 |  d 100 0x64 |  � 132 0x84 |  � 164 0xa4 |  � 196 0xc4 |  � 228 0xe4 |
// |  %har  37 0x25 |  Ehar  69 0x45 |  e 101 0x65 |  � 133 0x85 |  � 165 0xa5 |  � 197 0xc5 |  � 229 0xe5 |
// |  &har  38 0x26 |  Fhar  70 0x46 |  f 102 0x66 |  � 134 0x86 |  � 166 0xa6 |  � 198 0xc6 |  � 230 0xe6 |
// |  'har  39 0x27 |  Ghar  71 0x47 |  g 103 0x67 |  � 135 0x87 |  � 167 0xa7 |  � 199 0xc7 |  � 231 0xe7 |
// |  (har  40 0x28 |  Hhar  72 0x48 |  h 104 0x68 |  � 136 0x88 |  � 168 0xa8 |  � 200 0xc8 |  � 232 0xe8 |
// |  )har  41 0x29 |  Ihar  73 0x49 |  i 105 0x69 |  � 137 0x89 |  � 169 0xa9 |  � 201 0xc9 |  � 233 0xe9 |
// |  *har  42 0x2a |  Jhar  74 0x4a |  j 106 0x6a |  � 138 0x8a |  � 170 0xaa |  � 202 0xca |  � 234 0xea |
// |  +har  43 0x2b |  Khar  75 0x4b |  k 107 0x6b |  � 139 0x8b |  � 171 0xab |  � 203 0xcb |  � 235 0xeb |
// |  ,har  44 0x2c |  Lhar  76 0x4c |  l 108 0x6c |  � 140 0x8c |  � 172 0xac |  � 204 0xcc |  � 236 0xec |
// |  -har  45 0x2d |  Mhar  77 0x4d |  m 109 0x6d |  � 141 0x8d |  � 173 0xad |  � 205 0xcd |  � 237 0xed |
// |  .har  46 0x2e |  Nhar  78 0x4e |  n 110 0x6e |  � 142 0x8e |  � 174 0xae |  � 206 0xce |  � 238 0xee |
// |  /har  47 0x2f |  Ohar  79 0x4f |  o 111 0x6f |  � 143 0x8f |  � 175 0xaf |  � 207 0xcf |  � 239 0xef |
// |  0har  48 0x30 |  Phar  80 0x50 |  p 112 0x70 |  � 144 0x90 |  � 176 0xb0 |  � 208 0xd0 |  � 240 0xf0 |
// |  1har  49 0x31 |  Qhar  81 0x51 |  q 113 0x71 |  � 145 0x91 |  � 177 0xb1 |  � 209 0xd1 |  � 241 0xf1 |
// |  2har  50 0x32 |  Rhar  82 0x52 |  r 114 0x72 |  � 146 0x92 |  � 178 0xb2 |  � 210 0xd2 |  � 242 0xf2 |
// |  3har  51 0x33 |  Shar  83 0x53 |  s 115 0x73 |  � 147 0x93 |  � 179 0xb3 |  � 211 0xd3 |  � 243 0xf3 |
// |  4har  52 0x34 |  Thar  84 0x54 |  t 116 0x74 |  � 148 0x94 |  � 180 0xb4 |  � 212 0xd4 |  � 244 0xf4 |
// |  5har  53 0x35 |  Uhar  85 0x55 |  u 117 0x75 |  � 149 0x95 |  � 181 0xb5 |  � 213 0xd5 |  � 245 0xf5 |
// |  6har  54 0x36 |  Vhar  86 0x56 |  v 118 0x76 |  � 150 0x96 |  � 182 0xb6 |  � 214 0xd6 |  � 246 0xf6 |
// |  7har  55 0x37 |  Whar  87 0x57 |  w 119 0x77 |  � 151 0x97 |  � 183 0xb7 |  � 215 0xd7 |  � 247 0xf7 |
// |  8har  56 0x38 |  Xhar  88 0x58 |  x 120 0x78 |  � 152 0x98 |  � 184 0xb8 |  � 216 0xd8 |  � 248 0xf8 |
// |  9har  57 0x39 |  Yhar  89 0x59 |  y 121 0x79 |  � 153 0x99 |  � 185 0xb9 |  � 217 0xd9 |  � 249 0xf9 |
// |  :har  58 0x3a |  Zhar  90 0x5a |  z 122 0x7a |  � 154 0x9a |  � 186 0xba |  � 218 0xda |  � 250 0xfa |
// |  ;har  59 0x3b |  [har  91 0x5b |  { 123 0x7b |  � 155 0x9b |  � 187 0xbb |  � 219 0xdb |  � 251 0xfb |
// |  <har  60 0x3c |  \har  92 0x5c |  | 124 0x7c |  � 156 0x9c |  � 188 0xbc |  � 220 0xdc |  � 252 0xfc |
// |  =har  61 0x3d |  ]har  93 0x5d |  } 125 0x7d |  � 157 0x9d |  � 189 0xbd |  � 221 0xdd |  � 253 0xfd |
// |  >har  62 0x3e |  ^har  94 0x5e |  ~ 126 0x7e |  � 158 0x9e |  � 190 0xbe |  � 222 0xde |  � 254 0xfe |
// |  ?har  63 0x3f |  _har  95 0x5f |DEL 127 0x7f |  � 159 0x9f |  � 191 0xbf |  � 223 0xdf |  � 255 0xff |
// Click me to see the solution

#include<stdio.h>
int main()
{
    int i,var,temp,temp1,var1;
    printf("----------------------------------------------------\n");
    printf("extended Ascii table -excluding contro characters\n");
    printf("ch Dec Hex\n");
    for(i=32;i<=255;i++)
    {
        printf("%char ",i);
        printf("%d ",i);
        int calc=i/16;//42/16=2
        int rem=i%16;//42%16=10

        if(calc>=10 && calc<=16)
        {
            temp=calc%10;
            for(int j=0;j<=5;j++)
            {
                if(temp==j)
                {
                    var=65+j;
                    printf("0x%c",tolower(var));
                }
            }
        }
        if(calc>=0&&calc<10)
        {
            printf("0x%d",calc);
        }
        if(rem>=10 && rem<=16)
        {
            temp1=rem%10;
            for(int j=0;j<=5;j++)
            {
                if(temp1==j)
                {
                    var1=65+j;
                    printf("%c\n",tolower(var1));
                }
            }
        }
        if(rem>=0&&rem<10)
        {
            printf("%d\n",rem);
        }
    }
   return 0;
}
   