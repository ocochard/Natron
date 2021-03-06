.. _eu.gmic.MixerCMYK:

G’MIC Mixer CMYK node
=====================

*This documentation is for version 0.3 of G’MIC Mixer CMYK.*

Description
-----------

Author: David Tschumperle. Latest update: 2016/20/06.

Wrapper for the G’MIC framework (http://gmic.eu) written by Tobias Fleischer (http://www.reduxfx.com).

Inputs
------

+-------+-------------+----------+
| Input | Description | Optional |
+=======+=============+==========+
| Input |             | No       |
+-------+-------------+----------+

Controls
--------

.. tabularcolumns:: |>{\raggedright}p{0.2\columnwidth}|>{\raggedright}p{0.06\columnwidth}|>{\raggedright}p{0.07\columnwidth}|p{0.63\columnwidth}|

.. cssclass:: longtable

+---------------------------------------------+---------+-----------+---------------------------+
| Parameter / script name                     | Type    | Default   | Function                  |
+=============================================+=========+===========+===========================+
| Cyan factor / ``Cyan_factor``               | Double  | 1         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Cyan shift / ``Cyan_shift``                 | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Cyan smoothness / ``Cyan_smoothness``       | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Magenta factor / ``Magenta_factor``         | Double  | 1         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Magenta shift / ``Magenta_shift``           | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Magenta smoothness / ``Magenta_smoothness`` | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Yellow factor / ``Yellow_factor``           | Double  | 1         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Yellow shift / ``Yellow_shift``             | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Yellow smoothness / ``Yellow_smoothness``   | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Key factor / ``Key_factor``                 | Double  | 1         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Key shift / ``Key_shift``                   | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Key smoothness / ``Key_smoothness``         | Double  | 0         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Tones range / ``Tones_range``               | Choice  | All tones | |                         |
|                                             |         |           | | **All tones**           |
|                                             |         |           | | **Shadows**             |
|                                             |         |           | | **Mid-tones**           |
|                                             |         |           | | **Highlights**          |
+---------------------------------------------+---------+-----------+---------------------------+
| Tones smoothness / ``Tones_smoothness``     | Double  | 2         |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Preview type / ``Preview_type``             | Choice  | Full      | |                         |
|                                             |         |           | | **Full**                |
|                                             |         |           | | **Forward horizontal**  |
|                                             |         |           | | **Forward vertical**    |
|                                             |         |           | | **Backward horizontal** |
|                                             |         |           | | **Backward vertical**   |
|                                             |         |           | | **Duplicate top**       |
|                                             |         |           | | **Duplicate left**      |
|                                             |         |           | | **Duplicate bottom**    |
|                                             |         |           | | **Duplicate right**     |
+---------------------------------------------+---------+-----------+---------------------------+
| Output Layer / ``Output_Layer``             | Choice  | Layer 0   | |                         |
|                                             |         |           | | **Merged**              |
|                                             |         |           | | **Layer 0**             |
|                                             |         |           | | **Layer 1**             |
|                                             |         |           | | **Layer 2**             |
|                                             |         |           | | **Layer 3**             |
|                                             |         |           | | **Layer 4**             |
|                                             |         |           | | **Layer 5**             |
|                                             |         |           | | **Layer 6**             |
|                                             |         |           | | **Layer 7**             |
|                                             |         |           | | **Layer 8**             |
|                                             |         |           | | **Layer 9**             |
+---------------------------------------------+---------+-----------+---------------------------+
| Resize Mode / ``Resize_Mode``               | Choice  | Dynamic   | |                         |
|                                             |         |           | | **Fixed (Inplace)**     |
|                                             |         |           | | **Dynamic**             |
|                                             |         |           | | **Downsample 1/2**      |
|                                             |         |           | | **Downsample 1/4**      |
|                                             |         |           | | **Downsample 1/8**      |
|                                             |         |           | | **Downsample 1/16**     |
+---------------------------------------------+---------+-----------+---------------------------+
| Ignore Alpha / ``Ignore_Alpha``             | Boolean | Off       |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Preview/Draft Mode / ``PreviewDraft_Mode``  | Boolean | Off       |                           |
+---------------------------------------------+---------+-----------+---------------------------+
| Log Verbosity / ``Log_Verbosity``           | Choice  | Off       | |                         |
|                                             |         |           | | **Off**                 |
|                                             |         |           | | **Level 1**             |
|                                             |         |           | | **Level 2**             |
|                                             |         |           | | **Level 3**             |
+---------------------------------------------+---------+-----------+---------------------------+
