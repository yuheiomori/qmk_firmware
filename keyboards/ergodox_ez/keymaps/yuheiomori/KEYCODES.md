# QMK キーコード一覧表

## 基本キー

| キーコード            | 説明               |
| --------------------- | ------------------ |
| `KC_A` - `KC_Z`       | アルファベット A-Z |
| `KC_1` - `KC_0`       | 数字 1-0           |
| `KC_F1` - `KC_F24`    | ファンクションキー |
| `KC_ENT` / `KC_ENTER` | Enter              |
| `KC_ESC`              | Escape             |
| `KC_BSPC`             | Backspace          |
| `KC_TAB`              | Tab                |
| `KC_SPC` / `KC_SPACE` | Space              |
| `KC_DEL`              | Delete             |
| `KC_INS`              | Insert             |

## 記号キー

| キーコード | 説明                 |
| ---------- | -------------------- |
| `KC_MINS`  | `-` マイナス         |
| `KC_EQL`   | `=` イコール         |
| `KC_LBRC`  | `[` 左ブラケット     |
| `KC_RBRC`  | `]` 右ブラケット     |
| `KC_BSLS`  | `\` バックスラッシュ |
| `KC_SCLN`  | `;` セミコロン       |
| `KC_QUOT`  | `'` クォート         |
| `KC_GRV`   | `` ` `` グレイブ     |
| `KC_COMM`  | `,` カンマ           |
| `KC_DOT`   | `.` ドット           |
| `KC_SLSH`  | `/` スラッシュ       |

## モディファイアキー

| キーコード | 説明                       |
| ---------- | -------------------------- |
| `KC_LCTL`  | 左 Control                 |
| `KC_RCTL`  | 右 Control                 |
| `KC_LSFT`  | 左 Shift                   |
| `KC_RSFT`  | 右 Shift                   |
| `KC_LALT`  | 左 Alt (Option)            |
| `KC_RALT`  | 右 Alt (Option)            |
| `KC_LGUI`  | 左 GUI (Cmd/Win)           |
| `KC_RGUI`  | 右 GUI (Cmd/Win)           |
| `KC_HYPR`  | Hyper (Ctrl+Shift+Alt+GUI) |
| `KC_MEH`   | Meh (Ctrl+Shift+Alt)       |

## モディファイア + キー の組み合わせ

| マクロ     | 説明              |
| ---------- | ----------------- |
| `LCTL(kc)` | Ctrl + kc         |
| `LSFT(kc)` | Shift + kc        |
| `LALT(kc)` | Alt + kc          |
| `LGUI(kc)` | GUI + kc          |
| `HYPR(kc)` | Hyper + kc        |
| `MEH(kc)`  | Meh + kc          |
| `LCAG(kc)` | Ctrl+Alt+GUI + kc |

## 矢印キー・ナビゲーション

| キーコード              | 説明      |
| ----------------------- | --------- |
| `KC_UP`                 | 上矢印    |
| `KC_DOWN`               | 下矢印    |
| `KC_LEFT`               | 左矢印    |
| `KC_RGHT` / `KC_RIGHT`  | 右矢印    |
| `KC_HOME`               | Home      |
| `KC_END`                | End       |
| `KC_PGUP`               | Page Up   |
| `KC_PGDN` / `KC_PGDOWN` | Page Down |

## マウスキー - 移動

| キーコード    | 短縮形    | 説明         |
| ------------- | --------- | ------------ |
| `KC_MS_UP`    | `KC_MS_U` | マウス上移動 |
| `KC_MS_DOWN`  | `KC_MS_D` | マウス下移動 |
| `KC_MS_LEFT`  | `KC_MS_L` | マウス左移動 |
| `KC_MS_RIGHT` | `KC_MS_R` | マウス右移動 |

## マウスキー - ボタン

| キーコード   | 短縮形    | 説明                   |
| ------------ | --------- | ---------------------- |
| `KC_MS_BTN1` | `KC_BTN1` | 左クリック             |
| `KC_MS_BTN2` | `KC_BTN2` | 右クリック             |
| `KC_MS_BTN3` | `KC_BTN3` | 中クリック（ホイール） |
| `KC_MS_BTN4` | `KC_BTN4` | サイドボタン（戻る）   |
| `KC_MS_BTN5` | `KC_BTN5` | サイドボタン（進む）   |

## マウスキー - ホイール

| キーコード       | 短縮形    | 説明                 |
| ---------------- | --------- | -------------------- |
| `KC_MS_WH_UP`    | `KC_WH_U` | ホイール上スクロール |
| `KC_MS_WH_DOWN`  | `KC_WH_D` | ホイール下スクロール |
| `KC_MS_WH_LEFT`  | `KC_WH_L` | ホイール左スクロール |
| `KC_MS_WH_RIGHT` | `KC_WH_R` | ホイール右スクロール |

## マウスキー - 加速

| キーコード     | 短縮形    | 説明               |
| -------------- | --------- | ------------------ |
| `KC_MS_ACCEL0` | `KC_ACL0` | 遅い（精密操作）   |
| `KC_MS_ACCEL1` | `KC_ACL1` | 中速               |
| `KC_MS_ACCEL2` | `KC_ACL2` | 速い（大きく移動） |

## レイヤー操作

| マクロ          | 説明                             |
| --------------- | -------------------------------- |
| `MO(layer)`     | 押している間だけレイヤー切り替え |
| `TG(layer)`     | 押すたびにトグル                 |
| `TO(layer)`     | そのレイヤーに完全切り替え       |
| `LT(layer, kc)` | 長押し → レイヤー、タップ → キー |
| `OSL(layer)`    | 次の 1 キーだけレイヤー有効      |
| `DF(layer)`     | デフォルトレイヤーを変更         |

## ワンショットキー

| マクロ       | 説明                              |
| ------------ | --------------------------------- |
| `OSM(mod)`   | 次の 1 キーだけモディファイア有効 |
| `OSL(layer)` | 次の 1 キーだけレイヤー有効       |

## タップダンス用

| マクロ          | 説明                                   |
| --------------- | -------------------------------------- |
| `LT(layer, kc)` | 長押し → レイヤー、タップ → キー       |
| `MT(mod, kc)`   | 長押し → モディファイア、タップ → キー |
| `CTL_T(kc)`     | 長押し →Ctrl、タップ → キー            |
| `SFT_T(kc)`     | 長押し →Shift、タップ → キー           |
| `ALT_T(kc)`     | 長押し →Alt、タップ → キー             |
| `GUI_T(kc)`     | 長押し →GUI、タップ → キー             |

## メディアキー

| キーコード | 説明          |
| ---------- | ------------- |
| `KC_MUTE`  | ミュート      |
| `KC_VOLU`  | 音量上げ      |
| `KC_VOLD`  | 音量下げ      |
| `KC_MPLY`  | 再生/一時停止 |
| `KC_MSTP`  | 停止          |
| `KC_MPRV`  | 前のトラック  |
| `KC_MNXT`  | 次のトラック  |
| `KC_MRWD`  | 巻き戻し      |
| `KC_MFFD`  | 早送り        |

## システム

| キーコード | 説明                                   |
| ---------- | -------------------------------------- |
| `KC_PWR`   | 電源                                   |
| `KC_SLEP`  | スリープ                               |
| `KC_WAKE`  | ウェイク                               |
| `RESET`    | キーボードをリセット（書き込みモード） |
| `DEBUG`    | デバッグモード切り替え                 |

## 特殊キーコード

| キーコード            | 説明                             |
| --------------------- | -------------------------------- |
| `KC_TRNS` / `_______` | 透過（下のレイヤーのキーを使用） |
| `KC_NO` / `XXXXXXX`   | 何もしない                       |
| `KC_CAPS`             | Caps Lock                        |
| `KC_NLCK`             | Num Lock                         |
| `KC_SLCK`             | Scroll Lock                      |
| `KC_PSCR`             | Print Screen                     |
| `KC_PAUS`             | Pause                            |

## テンキー

| キーコード        | 説明           |
| ----------------- | -------------- |
| `KC_P1` - `KC_P0` | テンキー 1-0   |
| `KC_PDOT`         | テンキー `.`   |
| `KC_PENT`         | テンキー Enter |
| `KC_PPLS`         | テンキー `+`   |
| `KC_PMNS`         | テンキー `-`   |
| `KC_PAST`         | テンキー `*`   |
| `KC_PSLS`         | テンキー `/`   |

## RGB ライト - キーコード

| キーコード | 説明                   |
| ---------- | ---------------------- |
| `RGB_TOG`  | RGB オン/オフ切り替え  |
| `RGB_MOD`  | モード切り替え（順方向）|
| `RGB_RMOD` | モード切り替え（逆方向）|
| `RGB_HUI`  | 色相（Hue）を上げる    |
| `RGB_HUD`  | 色相（Hue）を下げる    |
| `RGB_SAI`  | 彩度（Saturation）を上げる |
| `RGB_SAD`  | 彩度（Saturation）を下げる |
| `RGB_VAI`  | 明度（Value/輝度）を上げる |
| `RGB_VAD`  | 明度（Value/輝度）を下げる |

## RGB ライト - モード直接指定

| キーコード | 説明             |
| ---------- | ---------------- |
| `RGB_M_P`  | Static（単色）   |
| `RGB_M_B`  | Breathing        |
| `RGB_M_R`  | Rainbow Mood     |
| `RGB_M_SW` | Rainbow Swirl    |
| `RGB_M_SN` | Snake            |
| `RGB_M_K`  | Knight Rider     |
| `RGB_M_X`  | Christmas        |
| `RGB_M_G`  | Static Gradient  |

## RGB ライト - モード一覧（全 34 モード）

| モード番号 | 名前            | 説明                               |
| ---------- | --------------- | ---------------------------------- |
| 1          | Static          | 単色で静止                         |
| 2-5        | Breathing       | 呼吸のようにゆっくり明滅（4 段階） |
| 6-8        | Rainbow Mood    | 全体が同じ色でゆっくり変化（3 段階）|
| 9-14       | Rainbow Swirl   | 虹色が流れるように回転（6 段階）   |
| 15-20      | Snake           | 蛇のように光が移動（6 段階）       |
| 21-23      | Knight Rider    | 左右に光が移動（3 段階）           |
| 24         | Christmas       | 赤と緑のクリスマスカラー           |
| 25-34      | Static Gradient | 静的なグラデーション（10 種類）    |

## RGB ライト - コード関数

| 関数                                  | 説明                         |
| ------------------------------------- | ---------------------------- |
| `rgblight_enable()`                   | RGB を有効化                 |
| `rgblight_disable()`                  | RGB を無効化                 |
| `rgblight_mode(mode)`                 | モードを設定（1-34）         |
| `rgblight_sethsv(h, s, v)`            | 色を設定（EEPROM 保存）      |
| `rgblight_sethsv_noeeprom(h, s, v)`   | 色を設定（EEPROM 保存なし）  |

### HSV 値の参考

| 色   | H（色相） | S（彩度） | V（明度） |
| ---- | --------- | --------- | --------- |
| 赤   | 0         | 255       | 255       |
| 緑   | 85        | 255       | 255       |
| 青   | 170       | 255       | 255       |
| 黄   | 43        | 255       | 255       |
| シアン | 128     | 255       | 255       |
| マゼンタ | 213   | 255       | 255       |
| 白   | 0         | 0         | 255       |

## Ergodox EZ 固有

| 関数                        | 説明                 |
| --------------------------- | -------------------- |
| `ergodox_board_led_on()`    | ボード LED 点灯      |
| `ergodox_board_led_off()`   | ボード LED 消灯      |
| `ergodox_right_led_1_on()`  | 右側 LED 1（赤）点灯 |
| `ergodox_right_led_2_on()`  | 右側 LED 2（緑）点灯 |
| `ergodox_right_led_3_on()`  | 右側 LED 3（青）点灯 |
| `ergodox_right_led_1_off()` | 右側 LED 1 消灯      |
| `ergodox_right_led_2_off()` | 右側 LED 2 消灯      |
| `ergodox_right_led_3_off()` | 右側 LED 3 消灯      |
