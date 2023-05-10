# Web-Server

**Цель:** разработка https-сервера и динамического веб-сайта с использованием языка C++.

**Языки и инструменты:**
<div>
<img src="https://github.com/devicons/devicon/blob/master/icons/cplusplus/cplusplus-original.svg" title="C++" alt="C++" width="30" height="30"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/javascript/javascript-original.svg" title="JavaScript" alt="JavaScript" width="30" height="30"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/html5/html5-original.svg" title="HTML" alt="HTML" width="30" height="30"/>&nbsp;
<img src="https://github.com/devicons/devicon/blob/master/icons/css3/css3-plain-wordmark.svg"  title="CSS" alt="CSS" width="30" height="30"/>&nbsp;
</div>

**Cхемка**
```mermaid
flowchart TD
    WebSite([Клиент])
    CSS_JS([CSS и JS]) --> HTMLBuilder
    SQL_Class([SQL]) --> HTMLBuilder
    SQL_Class <--> CGI
    WebServer <--> CGI([CGI scripts]) <--> HTMLBuilder([HTMLBuilder])
    API([API]) --> WebServer
    WebSite <--> API
    WebSite <--> WebServer([Веб-сервер]) 
```
## Установка
### Windows
#### MinGW Compiler

Для компиляции использовался **[gcc-w64devkit-mingw](https://github.com/skeeto/w64devkit/releases)**<br>
**Example:**` g++ -std=c++20 main.cpp -o main.exe -lWs2_32`

#### MSVC

**Example:**<br>
```
git clone https://github.com/AliceZed8/web-server.git
cd web-server
cmake .
```
<br>

