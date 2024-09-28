// Generated by commsdsl2tools_qt v6.3.4

#include "MonSpan.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MonSpan.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numRfblocks(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumRfblocks;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved0;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        struct SpectrumMembers
        {
            static QVariantMap createProps_element(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SpectrumMembers::Element;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct SpectrumMembers

        static QVariantMap createProps_spectrum(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Spectrum;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .serialisedHidden()
                    .add(SpectrumMembers::createProps_element(serHidden))
                    .appendIndexToElementName()
                    .asMap();
        }

        static QVariantMap createProps_span(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Span;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_res(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Res;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_center(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Center;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_pga(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Pga;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_spectrum(serHidden))
                .add(ElementMembers::createProps_span(serHidden))
                .add(ElementMembers::createProps_res(serHidden))
                .add(ElementMembers::createProps_center(serHidden))
                .add(ElementMembers::createProps_pga(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MonSpanFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_numRfblocks(false));
    props.append(createProps_reserved0(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class MonSpanImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MonSpan<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MonSpanImpl
    >
{
public:
    MonSpanImpl() = default;
    MonSpanImpl(const MonSpanImpl&) = delete;
    MonSpanImpl(MonSpanImpl&&) = delete;
    virtual ~MonSpanImpl() = default;
    MonSpanImpl& operator=(const MonSpanImpl&) = default;
    MonSpanImpl& operator=(MonSpanImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonSpan::MonSpan() : m_pImpl(new MonSpanImpl) {}
MonSpan::~MonSpan() = default;

MonSpan& MonSpan::operator=(const MonSpan& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonSpan& MonSpan::operator=(MonSpan&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MonSpan::MsgIdParamType MonSpan::doGetId()
{
    return ::cc_ublox::message::MonSpan<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MonSpan::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonSpan::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonSpan::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonSpan::resetImpl()
{
    m_pImpl->reset();
}

bool MonSpan::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MonSpan*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonSpan::MsgIdParamType MonSpan::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonSpan::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonSpan::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonSpan::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonSpan::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonSpan::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
