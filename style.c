/* ========================================================== */
/* 1. إعدادات الصفحة الأساسية (Reset & Base)               */
/* ========================================================== */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

body {
    background-color: #ffd1dc;
    color: #000000;
    line-height: 1.6;
    min-height: 100vh;
    display: flex;
    flex-direction: column;
    direction: ltr; /* التنسيق إنجليزي من اليسار لليمين */
}

/* ========================================================== */
/* 2. تنسيق الهيدر (Header) - كما في الصورة                */
/* ========================================================== */
.header {
    background-color: #ffe4e9;
    border-bottom: 2px solid #ffffff; /* الخط الأسود الفاصل */
    padding: 10px 4%;
    width: 100%;
    position: sticky;
    top: 0;
    z-index: 1000;
}

.h-content {
    display: flex;
    justify-content: space-between; /* يوزع الأقسام: يمين، وسط، يسار */
    align-items: center;
    max-width: 1400px;
    margin: 0 auto;
}

/* الجهة اليسرى: اللوجو والاسم */
.brand {
    display: flex;
    align-items: center;
    gap: 15px;
}

.logo-img {
    width: 80px;
    height: 80px;
    border-radius: 50%;
    object-fit: cover;
   
}

.brand-name {
    font-size: 24px;
    font-weight: 700;
    text-transform: uppercase;
}

/* المنتصف: روابط التنقل */
.nav-links {
    display: flex;
    gap: 25px;
}

.nav-links a {
    text-decoration: none;
    color: #000;
    font-size: 17px;
    font-weight: 500;
    transition: 0.3s;
}

.nav-links a:hover {
    color: #666;
}

/* الجهة اليمنى: أيقونة الشيف (الافتار) */
.user-profile {
    display: flex;
    align-items: center;
}

.profile-img {
    width: 50px;
    height: 50px;
    border-radius: 50%; /* لجعلها دائرية */
    border: 2px solid #000;
    background-color: #f0f0f0;
    object-fit: cover;
    transition: 0.3s ease;
    cursor: pointer;
}

.profile-img:hover {
    transform: scale(1.1);
}

/* ========================================================== */
/* 3. منطقة المحتوى (Main)                                 */
/* ========================================================== */
main {
    flex: 1; /* تجعل المحتوى يأخذ المساحة المتبقية */
    padding: 40px 5%;
    text-align: center;
}
/* quiz */
.quiz-container, .result-container {
    background: white;
    max-width: 700px;
    margin: 2rem auto;
    padding: 2rem;
    border-radius: 30px;
    box-shadow: 0 12px 28px #e7cfb9;
}

.question-counter {
    font-size: 1.2rem;
    color: #7b4f2e;
    margin-bottom: 1rem;
}

.question-box {
    background: #fff7ef;
    padding: 1.5rem;
    border-radius: 24px;
    margin: 1.5rem 0;
}

.question-box p {
    font-weight: 600;
    margin-bottom: 0.8rem;
}

.question-box label {
    display: block;
    margin: 0.3rem 0;
}
button, .btn {
    background: #c29a6b;
    border: none;
    color: white;
    padding: 0.7rem 2rem;
    border-radius: 40px;
    font-size: 1rem;
    cursor: pointer;
    font-weight: 600;
    text-decoration: none;
    display: inline-block;
}

button:hover, .btn:hover {
    background: #a77c52;
}
/* result page */
/* result page */

.result-box{

background:#f4f1ed;
padding:40px;
border-radius:30px;
text-align:center;
max-width:500px;
margin:auto;

}

/* رسالة النتيجة */

.excellent{

font-size:1.5rem;
color:#5a3e28;
margin:0.5rem 0 1.5rem;

}

/* container للدرجات */

.scores-box{

display:flex;
flex-direction:column;
align-items:center;
gap:1rem;
margin-bottom:1.5rem;

}

/* الدرجة */

.score{

font-size:2rem;
background:#eee1d4;
padding:0.8rem 2rem;
border-radius:50px;
font-weight:bold;

}

/* افضل درجة */

.best-score{

font-size:1.5rem;
background:#fad8b3;
padding:0.7rem 2rem;
border-radius:50px;
font-weight:bold;

}

/* ازرار الصفحة */

.result-actions{

display:flex;
justify-content:center;
margin-top:10px;

}

/* زر الداشبورد */

.btn{

background:#b99363;
color:white;
padding:10px 25px;
border-radius:25px;
text-decoration:none;
font-weight:bold;

}

.btn:hover{

background:#a07c4f;

}
/*لواحد/*

/* ========================================================== */
/* Contact Page                                               */
/* ========================================================== */

.contact-main {
    background-color: #fdf2f2;
    padding: 45px 5% 60px;
}

.contact-hero {
    text-align: center;
    max-width: 760px;
    margin: 0 auto 35px;
}

.contact-hero h2 {
    font-size: 42px;
    color: #2f1f1a;
    font-weight: 800;
    margin-bottom: 12px;
}

.contact-intro {
    font-size: 18px;
    line-height: 1.8;
    color: #6f5e52;
    margin: 0;
}

.contact-wrapper {
    max-width: 1100px;
    margin: 0 auto;
    display: grid;
    grid-template-columns: 1fr 1.2fr;
    gap: 28px;
    align-items: stretch;
}

.contact-details,
.contact-form {
    background: #fffaf5;
    border: 1px solid #ecd6c2;
    border-radius: 26px;
    padding: 28px;
    box-shadow: 0 8px 20px rgba(0,0,0,0.04);
}

.contact-details h3,
.contact-form h3 {
    margin: 0 0 18px;
    font-size: 28px;
    color: #3f2f28;
    font-weight: 800;
}

.contact-list {
    list-style: none;
    padding: 0;
    margin: 0;
}

.contact-list li {
    display: flex;
    flex-direction: column;
    gap: 4px;
    padding: 14px 0;
    border-bottom: 1px solid #f0dfcf;
}

.contact-list li:last-child {
    border-bottom: none;
}

.contact-label {
    font-size: 14px;
    font-weight: 700;
    color: #b08968;
    text-transform: uppercase;
    letter-spacing: 0.4px;
}

.contact-list span:last-child {
    font-size: 17px;
    color: #5f4d43;
    line-height: 1.6;
}

.contact-divider {
    height: 1px;
    background: #e8d3c0;
    margin: 20px 0;
}

.follow-title {
    margin: 0 0 14px;
    font-size: 18px;
    font-weight: 700;
    color: #3f2f28;
}

.social-list {
    display: flex;
    gap: 18px;
    justify-content: center;
    align-items: center;
}

.social-icon {
    width: 28px;
    height: 28px;
    object-fit: contain;
    transition: 0.25s ease;
}

.social-icon:hover {
    transform: scale(1.1);
}

.contact-form form {
    display: flex;
    flex-direction: column;
}

.contact-form label {
    margin-top: 14px;
    margin-bottom: 6px;
    font-weight: 700;
    color: #5f4d43;
}

.contact-form input,
.contact-form textarea {
    width: 100%;
    padding: 12px 14px;
    border: 1px solid #dcc1a7;
    border-radius: 14px;
    background: white;
    font-size: 15px;
    color: #4f4038;
    outline: none;
    transition: 0.2s ease;
}

.contact-form input:focus,
.contact-form textarea:focus {
    border-color: #c28b5b;
    box-shadow: 0 0 0 3px rgba(194, 139, 91, 0.12);
}

.contact-form textarea {
    resize: vertical;
    min-height: 120px;
}

.contact-form button {
    margin-top: 18px;
    align-self: center;
    background: #c28b5b;
    color: white;
    border: none;
    padding: 11px 26px;
    border-radius: 999px;
    font-weight: 700;
    cursor: pointer;
    transition: all 0.25s ease;
}

.contact-form button:hover {
    background: #a97445;
    transform: translateY(-2px);
}

@media screen and (max-width: 600px) {
    .contact-wrapper {
        grid-template-columns: 1fr;
    }
}
/* ========================================================== */
/* 4. Footer                                                  */
/* ========================================================== */
.footer {
    background-color: #ffe4e9;
    border-top: 1px solid #eee0d4;
    padding: 18px 5%;
    width: 100%;
}

.f-content {
    display: flex;
    align-items: center;
    justify-content: space-between;
    max-width: 1200px;
    margin: 0 auto;
}

.footer-section {
    flex: 1;
    display: flex;
    flex-direction: column;
}

/* محاذاة أقسام الفوتر */
.footer-section.left {
    align-items: flex-start;
    text-align: left;
}

.footer-section.center {
    align-items: center;
    text-align: center;
    gap: 2px;
}

.footer-section.right {
    align-items: flex-end;
    text-align: right;
}

.about-site {
    margin: 0;
    font-size: 15px;
    font-weight: 600;
    color: #6f5e52;
}

.copyright {
    margin: 4px 0 0 0 !important;
    font-size: 11px;
    color: #9a8a7e;
}

.contact-box h4 {
    margin: 0;
    font-size: 18px;
    text-transform: uppercase;
    color: #3f2f28;
    font-weight: 700;
}

.phone-number {
    margin-top: 4px;
    font-size: 14px;
    font-weight: 500;
    color: #8a6f5a;
}

.social {
    display: flex;
    gap: 12px;
}

.social-icon {
    width: 24px;
    height: 24px;
    background: transparent;
    object-fit: contain;
    transition: 0.25s;
    opacity: 0.9;
}

.social-icon:hover {
    transform: scale(1.12);
    opacity: 1;
}
/* ========================================================== */
/* 5. Responsive (دعم الموبايل)                            */
/* ========================================================== */
@media screen and (max-width: 768px) {
    .h-content, .f-content {
        flex-direction: column;
        gap: 25px;
    }
    
    .footer-section {
        align-items: center !important;
        text-align: center !important;
    }
}
/* ========================================================== */
/* 6. Home Page                                               */
/* ========================================================== */

.home-main {
    padding: 35px 5% 55px;
    background-color: #fdf2f2;
}

/* Hero */
.hero-section {
    text-align: center;
    margin-bottom: 38px;
}

.hero-gif img {
    width: 100%;
    max-width: 850px;
    height: auto;
    object-fit: cover;
    border-radius: 26px;
    border: 1px solid #ecd6c2;
    box-shadow: 0 10px 24px rgba(0,0,0,0.06);
    background: transparent;
    margin: 0 auto 20px;
    display: block;
}

.hero-text h2 {
    font-size: 48px;
    color: #2f1f1a;
    font-weight: 900;
    line-height: 1.2;
    margin-bottom: 14px;
}

.hero-text p {
    font-size: 20px;
    color: #6f5e52;
    line-height: 1.8;
    max-width: 760px;
    margin: 0 auto 18px;
}

.home-btn {
    display: inline-block;
    padding: 11px 24px;
    border-radius: 999px;
    background: #c28b5b;
    color: white;
    text-decoration: none;
    font-weight: 700;
    transition: all 0.25s ease;
}

.home-btn:hover {
    background: #a97445;
    transform: translateY(-2px);
}

/* Highlights */
.highlights-section {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 20px;
    margin-bottom: 42px;
}

.highlight-card {
    background: #fffaf5;
    border: 1px solid #ead2bb;
    border-radius: 22px;
    padding: 22px 18px;
    text-align: center;
    box-shadow: 0 6px 16px rgba(0,0,0,0.04);
    transition: 0.25s ease;
}

.highlight-card:hover {
    transform: translateY(-4px);
}

.highlight-card h3 {
    font-size: 22px;
    color: #3f2f28;
    margin-bottom: 8px;
}

.highlight-card p {
    color: #6f5e52;
    line-height: 1.7;
    font-size: 16px;
}

/* Section Head */
.section-head {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 20px;
}

.section-head h3,
.reviews-section h3,
.cta-section h3 {
    font-size: 36px;
    color: #2f1f1a;
    font-weight: 800;
    margin: 0;
}

.section-link {
    text-decoration: none;
    color: #7b4f2e;
    font-weight: 700;
}

.section-link:hover {
    text-decoration: underline;
}

/* Featured */
.featured-section {
    margin-bottom: 45px;
}

.featured-grid {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 24px;
}

.featured-card {
    background: #fffdf9;
    border: 1px solid #ecd6c2;
    border-radius: 24px;
    padding: 28px 18px;
    text-align: center;
    box-shadow: 0 8px 20px rgba(0,0,0,0.05);
    transition: 0.28s ease;
}

.featured-card:hover {
    transform: translateY(-6px);
    box-shadow: 0 14px 28px rgba(0,0,0,0.08);
}




.featured-card p {
    font-size: 22px;
    font-weight: 700;
    color: #3f2f28;
    margin-bottom: 12px;
}

.view-btn {
    display: inline-block;
    text-decoration: none;
    color: #7b4f2e;
    border: 1px solid #d4b28c;
    padding: 8px 18px;
    border-radius: 999px;
    font-weight: 700;
    background-color: white;
    transition: 0.2s;
}

.view-btn:hover {
    background-color: #f3e3d2;
}

.lesson-name {
    color: #3f2f28;           
    text-decoration: underline;   
    font-size: 24px;
    font-weight: 700;
    display: block;
    margin-bottom: 16px;
}

.lesson-name:hover {
    color: #7b4f2e;
    text-decoration: underline; /* لو تبين يوضح عند المرور فقط */
}
.featured-card a:hover {
    background-color: #f3e3d2;
}

/* Reviews */
.reviews-section {
    text-align: center;
    margin-bottom: 42px;
}

.reviews-section h3 {
    margin-bottom: 22px;
}

.reviews-container {
    display: flex;
    justify-content: center;
    gap: 22px;
    flex-wrap: wrap;
}

.review-card {
    width: 260px;
    background: #fffdf9;
    border: 1px solid #ecd6c2;
    border-radius: 22px;
    padding: 20px 16px;
    text-align: center;
    box-shadow: 0 8px 18px rgba(0,0,0,0.05);
    transition: all 0.25s ease;
}

.review-card:hover {
    transform: translateY(-5px);
    box-shadow: 0 12px 24px rgba(0,0,0,0.08);
}

.review-card p {
    margin-bottom: 10px;
    color: #5f4d43;
    line-height: 1.7;
    font-size: 16px;
}

.review-card span {
    font-size: 22px;
    color: #b88a5a;
}

/* CTA */
.cta-section {
    background: #fffaf5;
    border: 1px solid #ead2bb;
    border-radius: 26px;
    padding: 30px 22px;
    text-align: center;
    box-shadow: 0 8px 18px rgba(0,0,0,0.04);
}

.cta-section h3 {
    margin-bottom: 12px;
}

.cta-section p {
    color: #6f5e52;
    font-size: 18px;
    line-height: 1.8;
    margin-bottom: 16px;
}

/* Responsive */
@media screen and (max-width: 992px) {
    .highlights-section,
    .featured-grid {
        grid-template-columns: repeat(2, 1fr);
    }

    .hero-gif img {
        height: 220px;
    }
}

@media screen and (max-width: 768px) {
    .hero-text h2 {
        font-size: 34px;
    }

    .hero-text p,
    .cta-section p {
        font-size: 18px;
    }

    .section-head {
        flex-direction: column;
        gap: 10px;
        text-align: center;
    }

    .section-head h3,
    .reviews-section h3,
    .cta-section h3 {
        font-size: 30px;
    }

    .highlights-section,
    .featured-grid {
        grid-template-columns: 1fr;
    }

    .hero-gif img {
        height: 180px;
    }
}
/* ========================================================== */
/* 7. Courses Page                                            */
/* ========================================================== */

.courses-main {
    padding: 40px 5% 55px;
    background-color: #fdf2f2;
}

.courses-intro {
    text-align: center;
    margin-bottom: 35px;
}

.courses-intro h2 {
    font-size: 48px;
    margin-bottom: 12px;
    color: #3f2f28;
    font-weight: 800;
    letter-spacing: 0.3px;
}

.courses-intro p {
    font-size: 20px;
    color: #6f5e52;
    line-height: 1.8;
    max-width: 760px;
    margin: 0 auto;
}

/* 3 courses only */
.courses-grid.three-courses {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 28px;
}

.course-card.big-card {
    background: #fffdf9;
    border: 1px solid #ecd6c2;
    border-radius: 26px;
    padding: 18px;
    text-align: center;
    box-shadow: 0 8px 20px rgba(0,0,0,0.05);
    transition: all 0.28s ease;
}

.course-card.big-card:hover {
    transform: translateY(-6px);
    box-shadow: 0 14px 28px rgba(0,0,0,0.08);
}

.course-image-wrap {
    position: relative;
    overflow: hidden;
    border-radius: 20px;
    margin-bottom: 16px;
}

.course-image-wrap img {
    width: 100%;
    height: 250px;
    object-fit: cover;
	object-position:top;
    display: block;
    background: #f7ece5;
}

.course-overlay {
    position: absolute;
    inset: 0;
    display: flex;
    align-items: flex-end;
    justify-content: center;
    padding-bottom: 20px;
    background: linear-gradient(to top, rgba(0,0,0,0.35), rgba(0,0,0,0.05), transparent);
}

.course-overlay h3 {
    color: white;
    font-size: 34px;
    font-weight: 800;
    letter-spacing: 0.5px;
    margin: 0;
    text-shadow: 0 3px 10px rgba(0,0,0,0.25);
}

.course-card.big-card p {
    font-size: 16px;
    color: #6f5e52;
    line-height: 1.7;
    margin: 0 0 16px;
    min-height: 52px;
}

.view-btn {
    display: inline-block;
    padding: 10px 22px;
    border-radius: 999px;
    background: #c28b5b;
    color: white;
    text-decoration: none;
    font-weight: 700;
    border: none;
    box-shadow: 0 4px 10px rgba(0,0,0,0.05);
    transition: all 0.25s ease;
}

.view-btn:hover {
    background: #a97445;
    transform: translateY(-2px);
}

/* Responsive */
@media screen and (max-width: 992px) {
    .courses-grid.three-courses {
        grid-template-columns: 1fr;
    }

    .course-image-wrap img {
        height: 260px;
    }
}

@media screen and (max-width: 768px) {
    .courses-intro h2 {
        font-size: 36px;
    }

    .courses-intro p {
        font-size: 18px;
    }

    .course-overlay h3 {
        font-size: 28px;
    }
}

.chef-name {
    font-size: 13px;
    color: #b08968;
    font-weight: 600;
    margin:8px 0 12px;
    text-align:center;
	position: relative;
}

.chef-name::after {
    content: "";
    display: block;
    width: 50%;
    height: 1px;
    background: #ecd6c2;
    margin: 8px auto 0;
}
/* ========================================================== */
/* Responsive - Courses Page                                  */
/* ========================================================== */

@media screen and (max-width: 992px) {
    .courses-grid {
        grid-template-columns: repeat(2, 1fr);
    }
}

@media screen and (max-width: 768px) {
    .courses-intro h2 {
        font-size: 36px;
    }

    .courses-intro p {
        font-size: 18px;
    }

    .courses-grid {
        grid-template-columns: 1fr;
    }

    .course-card img {
        height: 220px;
    }
}

/* ========================================================== */
/* 8. Lesson Page 1                                           */
/* ========================================================== */
body {
    background-color: #fdf2f2;
}
.lesson-container {
    max-width: 950px;
    margin: auto;
    padding: 2.5rem 2rem;
	
}

/* Navigation */
.lesson-navigation {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 2rem;
}

.lesson-link {
    display: inline-flex;
    align-items: center;
    justify-content: center;
    gap: 6px;
    min-width: 120px;
    padding: 10px 20px;
    border-radius: 30px;
    background: #fff3e8;
    border: 1px solid #e6c7a8;
    color: #7b4f2e;
    font-weight: 700;
    text-decoration: none;
    box-shadow: 0 4px 10px rgba(0,0,0,0.05);
    transition: all 0.25s ease;
}

.lesson-link:hover {
    background: #f7e2cf;
    transform: translateY(-2px);
}

/* Image */
.lesson-image {
    text-align: center;
    margin-bottom: 1.5rem;
}

.lesson-image img {
    width: 100%;
    max-width: 520px;
    height: 280px;
    object-fit: cover;
    border-radius: 24px;
    box-shadow: 0 10px 24px rgba(0,0,0,0.08);
    transition: transform 0.25s ease, box-shadow 0.25s ease;
}

.lesson-image img:hover {
    transform: scale(1.02);
    box-shadow: 0 14px 28px rgba(0,0,0,0.1);
}

/* Title */
.lesson-title {
    text-align: center;
    font-size: 40px;
    margin-bottom: 1rem;
    color: #3f2f28;
    font-weight: 800;
    letter-spacing: 0.3px;
}

/* Info badges */
.lesson-info {
    display: flex;
    justify-content: center;
    gap: 1rem;
    flex-wrap: wrap;
    margin-bottom: 2rem;
}

.lesson-info span {
    background: #fffaf5;
    border: 1px solid #ead2bb;
    border-radius: 999px;
    padding: 10px 18px;
    color: #6b5a4f;
    font-weight: 600;
    box-shadow: 0 4px 10px rgba(0,0,0,0.04);
}

/* Grid */
.lesson-grid {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 1.5rem;
    margin-bottom: 1.5rem;
}

/* Shared card */
.lesson-box {
    background: #fffdf9;
    border: 1px solid #ecd6c2;
    border-radius: 22px;
    padding: 2rem;
    box-shadow: 0 8px 20px rgba(0,0,0,0.05);
    transition: all 0.28s ease;
    position: relative;
}

.lesson-box:hover {
    transform: translateY(-5px);
    box-shadow: 0 14px 28px rgba(0,0,0,0.08);
}

.lesson-box::after {
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 4px;
    background: #e6c7a8;
    border-radius: 22px 22px 0 0;
}

.lesson-box h3 {
    font-size: 20px;
    color: #3f2f28;
    margin-bottom: 1.2rem;
    text-align: center;
    font-weight: 700;
    letter-spacing: 0.3px;
    padding-bottom: 10px;
    position: relative;
}

.lesson-box h3::after {
    content: "";
    position: absolute;
    left: 50%;
    bottom: 0;
    transform: translateX(-50%);
    width: 60%;
    height: 3px;
    background:#e6c7a8;
    
    border-radius: 2px;
}
.lesson-box p {
    color: #6f5e52;
    line-height: 1.8;
    text-align: center;
}

.lesson-box ul {
    list-style: none;
    padding: 0;
    margin: 0;
}

.lesson-box li {
    padding: 12px 0;
    border-bottom: 1px solid #f0e2d3;
    text-align: center;
    color: #6f5e52;
}

.lesson-box li:last-child {
    border-bottom: none;
}

/* Ingredients note style */
.ingredients-note {
    background: repeating-linear-gradient(
        to bottom,
        #fffdf9 0px,
        #fffdf9 34px,
        #f1ddd0 35px,
        #fffdf9 36px
    );
    position: relative;
}

.ingredients-note::before {
    content: "";
    position: absolute;
    top: 0;
    left: 26px;
    width: 2px;
    height: 100%;
    background: #f0c7c7;
    opacity: 0.9;
    border-radius: 4px;
}

.ingredients-note h3 {
    text-align: center;
    padding-left: 24px;
    position: relative;
    z-index: 1;
}

.ingredients-note table {
    position: relative;
    z-index: 1;
    width: 100%;
    border-collapse: collapse;
    margin-top: 10px;
}

.ingredients-note td:first-child {
    width: 25%;          /* أصغر */
    font-weight: 500;    /* أخف */
    color: #9c8a7c;      /* أفتح */
    font-size: 14px;
}

.ingredients-note td:last-child {
    width: 75%;          /* أكبر */
    font-weight: 700;    /* أوضح */
    color: #3f2f28;
    font-size: 16px;
}


.ingredients-note tr {
    height: 34px; 
}

/* Tips */
.tips-box {
    margin-top: 1.5rem;
    background: #fff5ea;
    border: 1px solid #e6c7a8;
    border-radius: 22px;
    padding: 1.6rem 1.8rem;
    box-shadow: 0 8px 20px rgba(0,0,0,0.05);
    transition: all 0.28s ease;
}

.tips-box:hover {
    transform: translateY(-4px);
    box-shadow: 0 12px 24px rgba(0,0,0,0.08);
}

.tips-box h3 {
    font-size: 22px;
    color: #7b4f2e;
    margin-bottom: 0.8rem;
    text-align: center;
}

.tips-box p {
    color: #6f5e52;
    line-height: 1.8;
    text-align: center;
}

/* Soft animation */
.lesson-box,
.tips-box,
.lesson-info span {
    animation: fadeSoft 0.5s ease;
}

@keyframes fadeSoft {
    from {
        opacity: 0;
        transform: translateY(12px);
    }
    to {
        opacity: 1;
        transform: translateY(0);
    }
}

/* Responsive */
@media (max-width: 768px) {
    .lesson-grid {
        grid-template-columns: 1fr;
    }

    .lesson-title {
        font-size: 32px;
    }

    .lesson-image img {
        height: 220px;
    }

    .lesson-navigation {
        gap: 12px;
    }

    .lesson-link {
        min-width: auto;
        font-size: 14px;
        padding: 9px 14px;
    }
}
/* ========================================================== */
/* Lesson Page 2 */
/* ========================================================== */

.lesson2-container {
    max-width: 1100px;
    margin: auto;
    padding: 3rem 2rem;
}

/* Top button */
.top-actions {
    width: 100%;
    display: flex;
    justify-content: flex-start;
    margin-bottom: 2rem;
}

.prev-btn {
    display: inline-flex;
    align-items: center;
    gap: 6px;
    padding: 10px 20px;
    border-radius: 30px;
    background: #fff3e8;
    border: 1px solid #e6c7a8;
    color: #7b4f2e;
    font-weight: 700;
    text-decoration: none;
    box-shadow: 0 4px 10px rgba(0,0,0,0.05);
    transition: all 0.25s ease;
}

.prev-btn:hover {
    background: #f7e2cf;
    transform: translateX(-4px);
}

/* Header */
.lesson2-header {
    text-align: center;
    margin-bottom: 2.5rem;
}

.lesson2-header h2 {
    font-size: 40px;
    font-weight: 800;
    color: #3f2f28; /* بدل الأسود */
    letter-spacing: 0.3px;
}

.lesson-subtitle {
    font-size: 18px;
    color: #7a6a5f;
    line-height: 1.8;
}

/* Layout */
.lesson2-layout {
    display: grid;
    grid-template-columns: 2.2fr 1fr;
    gap: 2rem;
    align-items: start;
}

/* Timeline */
.timeline {
    position: relative;
    padding-left: 50px;
}

.timeline::before {
    content: "";
    position: absolute;
    left: 20px;
    top: 0;
    width: 3px;
    height: 100%;
    background:#c29a6b;
  
}

/* Steps */
.timeline-item {
    position: relative;
    margin-bottom: 2rem;

    /* Animation */
    opacity: 0;
    transform: translateY(18px);
    animation: fadeUp 0.6s ease forwards;
}

.timeline-item:nth-child(1) { animation-delay: 0.08s; }
.timeline-item:nth-child(2) { animation-delay: 0.16s; }
.timeline-item:nth-child(3) { animation-delay: 0.24s; }
.timeline-item:nth-child(4) { animation-delay: 0.32s; }
.timeline-item:nth-child(5) { animation-delay: 0.40s; }
.timeline-item:nth-child(6) { animation-delay: 0.48s; }

@keyframes fadeUp {
    to {
        opacity: 1;
        transform: translateY(0);
    }
}

.step-number {
    position: absolute;
    left: -5px;
    width: 40px;
    height: 40px;
    background: #c29a6b;
    color: white;
    border-radius: 50%;
    display: flex;
    align-items: center;
    justify-content: center;
    font-weight: bold;
    box-shadow: 0 4px 10px rgba(174, 132, 87, 0.25);
}

/* Cards */
.timeline-content {
    background: #fffaf5;
    padding: 1.3rem 1.6rem;
    border-radius: 18px;
    border: 1px solid #ecd6c2;
    margin-left: 55px;
    box-shadow: 0 4px 10px rgba(0,0,0,0.05);
    transition: 0.28s;
}

.timeline-content:hover {
    transform: translateY(-6px) scale(1.01);
    box-shadow: 0 10px 22px rgba(0,0,0,0.08);
    background: #fffdf9;
}

.timeline-content p {
    color: #6f5e52;
}

/* Notes */
.notes-box {
    background: #fff5ea;
    padding: 1.6rem;
    border-radius: 20px;
    border: 1px solid #e6c7a8;
}

.notes-box.side-notes {
    position: sticky;
    top: 30px;
    transition: 0.28s;
}

.notes-box.side-notes:hover {
    transform: translateY(-4px);
    box-shadow: 0 10px 22px rgba(0,0,0,0.08);
}
/* ===== Lesson 2 - Notes List ===== */

.notes-list {
    list-style: none;
    padding: 0;
    text-align: left;
}

.notes-list li {
    position: relative;
    padding-left: 25px;
    margin-bottom: 10px;
    line-height: 1.8;
}

.notes-list li::before {
    content: "✔";
    position: absolute;
    left: 0;
    color: #e6c7a8;
    font-size: 16px;
}


/* Quiz button */
.quiz-section {
    text-align: center;
    margin-top: 2.5rem;
}

.btn-main {
    background: linear-gradient(135deg, #c29a6b, #ae8457);
    color: white;
    padding: 12px 26px;
    border-radius: 25px;
    text-decoration: none;
    font-weight: 600;
    letter-spacing: 0.5px;
    box-shadow: 0 8px 18px rgba(174, 132, 87, 0.28);
    border: 1px solid #ae8457;
    transition: all 0.3s ease;
}

.btn-main:hover {
    background: linear-gradient(135deg, #b88c5e, #9f744a);
    transform: translateY(-3px) scale(1.03);
    box-shadow: 0 12px 24px rgba(174, 132, 87, 0.35);
}

/* Responsive */
@media (max-width: 992px) {
    .lesson2-layout {
        grid-template-columns: 1fr;
    }

    .side-notes {
        position: static;
    }
}
/* ========================================================== */
/* 10. Shared Enhancements                                    */
/* ========================================================== */

.course-card,
.lesson-box,
.tips-box,
.notes-box.side-notes,
.timeline-content,
.view-btn,
.lesson-link,
.nav-links a,
.prev-btn,
.btn-main {
    transition: all 0.25s ease;
}

/* ========================================================== */
/* Responsive - Lesson Pages                                  */
/* ========================================================== */

@media screen and (max-width: 992px) {
    .lesson2-layout {
        grid-template-columns: 1fr;
    }

    .notes-box.side-notes {
        position: static;
    }
}

@media screen and (max-width: 768px) {
    .lesson-grid {
        grid-template-columns: 1fr;
    }

    .lesson-title {
        font-size: 30px;
    }

    .lesson-image img {
        height: 220px;
    }

    .lesson-box h3,
    .tips-box h3 {
        font-size: 20px;
    }

    .lesson2-header h2 {
        font-size: 32px;
    }
}

/* about us */

/* الحاوية الكبرى */
.main-container {
    display: flex;
    gap: 40px;
    align-items: flex-start;
    padding: 20px;
}

/* القسم الجانبي (العنوان والقائمة) ثابت مكانه */
.sidebar {
    flex: 0 0 200px; /* العرض الثابت للقسم الجانبي */
}

/* منطقة البطاقات - هنا السر */
.cards-wrapper {
    display: flex;
    gap: 20px;
    
    /* هذا السطر يسمح بالتمرير الأفقي */
    overflow-x: auto; 
    
    /* هذا السطر يمنع البطاقات من النزول لسطر جديد */
    flex-wrap: nowrap; 
    
    /* يعطي مساحة بسيطة تحت البطاقات */
    padding-bottom: 20px;

    /* مهم جداً عشان ما تنضغط العناصر */
    min-width: 0; 
}

/* تنسيق البطاقة الواحدة */
.chef-card {
    /* الحجم الطبيعي للبطاقة */
    min-width: 220px; 
    width: 220px;
    
    /* منع البطاقة من الانكماش نهائياً */
    flex-shrink: 0; 
    
    border: 2px solid #333;
    border-radius: 40px;
    padding: 20px;
    background-color: #fff;
    box-sizing: border-box; /* لضمان حساب المسافات بدقة */
}

/* تنسيق الصورة داخل البطاقة */
.image-box {
    width: 100%;
    height: 140px;
    background-color: #f0f0f0;
    border-radius: 20px;
    overflow: hidden;
    display: flex;
    justify-content: center;
    align-items: center;
}

.image-box img {
    width: 100%;
    height: 100%;
    object-fit: cover; /* تحافظ على أبعاد الصورة داخل المربع */
}

.divider {
    border: 0;
    border-top: 1px solid #333;
    margin: 15px 0;
}

.dashboard-container {
    max-width: 860px;
    margin: 40px auto;
    padding: 0 5%;
}

.dashboard-title {
    font-size: 42px;
    font-weight: 800;
    color: var(--primary-brown);
    margin-bottom: 28px;
}

.dashboard-item {
    display: flex;
    align-items: center;
    gap: 20px;
    background: var(--bg-cream);
    border: 1px solid var(--border-color);
    border-radius: 22px;
    padding: 18px 22px;
    margin-bottom: 18px;
    text-decoration: none;
    color: var(--primary-brown);
    box-shadow: 0 6px 18px rgba(0,0,0,0.05);
    transition: all 0.25s ease;
}

.dashboard-item:hover {
    transform: translateY(-3px);
    box-shadow: 0 12px 24px rgba(0,0,0,0.08);
    background: #fff5ec;
}

.icon-box {
    width: 80px;
    height: 80px;
    border-radius: 16px;
    overflow: hidden;
    flex-shrink: 0;
}

/* --- 4. Quiz Results & Notes Sections (Common Card Style) --- */
.quiz-results-card, .add-note-section, .your-notes-section {
    background: var(--bg-cream);
    border: 1px solid var(--border-color);
    border-radius: 22px;
    padding: 24px 28px;
    margin-bottom: 28px;
    box-shadow: 0 6px 18px rgba(0,0,0,0.05);
}

.results-subtitle, .add-note-section h3, .your-notes-section h3 {
    font-size: 22px;
    font-weight: 800;
    color: var(--primary-brown);
    margin-bottom: 14px;
    padding-bottom: 10px;
    border-bottom: 1px solid var(--border-color);
}

/* --- 5. MyNote Specifics --- */
.note-card {
    display: flex;
    align-items: center;
    gap: 16px;
    background: #fff;
    border: 1px solid var(--border-color);
    border-radius: 16px;
    padding: 14px;
    margin-bottom: 14px;
}

.input-field {
    border: none;
    border-bottom: 1px solid var(--border-color);
    outline: none;
    padding: 4px 0;
    color: var(--primary-brown);
    background: transparent;
}

/* --- 6. Buttons --- */
.btn-main {
    background: var(--accent-gold);
    color: #fff;
    border: none;
    padding: 11px 36px;
    border-radius: 999px;
    font-weight: 700;
    cursor: pointer;
    transition: all 0.25s ease;
}

.btn-main:hover {
    background: #a97445;
    transform: translateY(-2px);
}

/* --- 7. About Us Section --- */
.main-container {
    max-width: 1200px;
    margin: 40px auto;
    padding: 0 5%;
    display: flex;
    gap: 32px;
}

.chef-card {
    min-width: 200px;
    background: var(--bg-cream);
    border: 1px solid var(--border-color);
    border-radius: 22px;
    padding: 18px;
    transition: 0.25s ease;
}
/* ========================================================== */
/* تنسيق صفحة تقييم المعلمين (Teachers Evaluation)             */
/* ========================================================== */

/* 1. الحاوية الكبرى للمحتوى */
.main-wraper {
    width: 100%;
    display: flex;
    flex-direction: column;
    align-items: center;
    padding: 0;
}

/* 2. البانر المستطيل الممتد تماماً للحواف */
.full-width-banner {
    width: 100%;
    height: 350px; /* طول المستطيل */
    overflow: hidden;
    margin-bottom: 20px;
}

.full-width-banner img {
    width: 100%;
    height: 100%;
    object-fit: cover; /* لضمان عدم تمطط الصورة */
}
.notes-form{
    background:#fff;
    border:2px solid #000;

    width:90%;
    max-width:1200px;

    padding:30px;

    display:flex;
    flex-direction:column;
    gap:25px;

    margin:40px auto;
}

/* 4. الحقول الداخلية (مستطيلة وحادة) */
.input-fild, .textarea-fild {
    width: 100%;
    border: 2px solid #000 !important;
    border-radius: 0 !important; 
    padding: 15px;
    font-size: 18px;
    background-color: #fff;
    outline: none;
}

.textarea-fild {
    height: 100px;
    resize: none;
}

/* 5. تنسيق منطقة التقييم (النجوم والنص) */
.rate-div {
    display: flex;
    align-items: center;
    justify-content: space-between;
    gap: 20px;
}

.rate-stars {
    display: flex;
    flex-direction: column;
    min-width: 160px;
    text-align: left;
}

.rate-stars p {
    font-size: 35px;
    font-weight: bold;
}

.rate-icon{
    font-size: 35px;
    letter-spacing: 5px;
    color: #ffd1dc;   /* نفس لون الخلفية */
}
/* 6. زر الحفظ المستطيل */
.save-btn {
    align-self: flex-end;
    background-color: #000;
    color: #fff;
    padding: 12px 70px; /* تمديد الزر عرضياً */
    font-size: 18px;
    font-weight: bold;
    border-radius:20px;
    cursor: pointer;
}

/* التجاوب مع الجوال */
@media screen and (max-width: 768px) {
    .rate-div {
        flex-direction: column;
        align-items: flex-start;
    }
    .full-width-banner {
        height: 200px;
    }
}