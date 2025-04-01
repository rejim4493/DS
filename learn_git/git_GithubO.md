### 自學資源
操作git與上傳github<br>

# 上傳到Github的流程是  
先按ctrl + S  
git add .  
git commit -m "簡述"  
git push  


## 程式與網頁開發者必備技能！Git 和 GitHub 零基礎快速上手，輕鬆掌握版本控制的要訣！  
如何安裝與git的帳號資訊  
URL：https://youtu.be/FKXRiAiQFiY?si=neu3tstEoOt0XMo0  
  
git --version \\查看版本狀態  
git config --global user.name "urname" \\設定作者  
git config --global user.email "uremail" \\設定郵箱  
git init \\在當前資料夾生成隱藏的.git子資料夾，儲存檔案變更的歷史  
clear \\清除終端機對話紀錄  
  
git status \\檢查當前目錄中每個檔案的狀態  
  
檔案分三種  
未追蹤 Untracked \\git 不會去紀錄內容變更和編輯歷史  
已追蹤 Tracked  
已暫存 Staged  
已提交 Committed  
  
git add <filename.md> \\將未追蹤檔案改為已追蹤，完成會使檔名右側由U變為A  
\\可用萬用字元 * 接上檔案類型，"*.md"代表所有同樣類型的檔案  
\\可直接用.，代表所有變更都加入到暫存區  
  
git commit -m "" \\-m代表message，後面都必須用雙引號裝進簡短的訊息，用來幫助快速了解每次提交的目的和內容變化  
  
git log \\列出提交的版本歷史  
\\按下Q可退出log的檢視模式  
git log --online \\簡化版指令，適合快速瀏覽過去的提交紀錄  
  
git diff <oldversionID> --<filrname.md>\\用來比較新舊版本的差異，貼上舊版本的ID來比較與當前的差異  
git checkout <oldversionID> --<filrname.md>\\還原到舊的版本，同樣需要進行提交，用status檢查，再進行提交就會更新回舊版本。  
  
git reset --hard <oldversionID> \\整個回到某舊版本，並刪除該版本以後的存檔紀錄，是不可逆的。建議先備份。  
  
新增文件  
add => commit  
假設按下delete鍵刪除  
用git status檢查狀態發現是尚未儲存的變更，要解決必須先，git add回暫存區  
觀念：git 追蹤的是檔案的『變化』而非檔案本身  
刪除檔案的變動同樣需要被追蹤，要拍張快照。  
  
.gitignore的檔案用來儲存要被忽略紀錄變化的檔名或副檔名，避免無關的檔案混入版本紀錄  
  
git是版本控制系統  
Github是雲端協作平台  
  
git remote add <> <URL> \\遠端；新增；遠端資料庫名稱；網址  
git branch -M main \\分支管理；重新命名；新的分支名  
git push -u origin main \\推送；建立關聯；遠端名稱；本地名稱  
  


